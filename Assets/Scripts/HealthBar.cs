using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthBar : MonoBehaviour
{

    public const float maxHealth = 200f;
    public float currentHealth;
    public RectTransform lifePoint, hurt;

    [SerializeField] GameOverScreen gameOverScreen;
    //[SerializeField] GameObject sneezer;

    // Social distancing
    CapsuleCollider2D[] selfColliders;
    BoxCollider2D[] distanceColliders;
    // Flashing flashImage;

    private void Awake()
    {
        currentHealth = maxHealth;
    }


    void Update()
    {
        GameObject[] sneezers = GameObject.FindGameObjectsWithTag("Sneezer");
        selfColliders = new CapsuleCollider2D[sneezers.Length];
        distanceColliders = new BoxCollider2D[sneezers.Length];

        for (var i = 0; i < sneezers.Length; i++)
        {
            selfColliders[i] = sneezers[i].GetComponent<CapsuleCollider2D>();
            distanceColliders[i] = sneezers[i].transform.GetChild(0).GetComponent<BoxCollider2D>();
        }

        //將綠色血條同步到當前血量長度
        lifePoint.sizeDelta = new Vector2(currentHealth, lifePoint.sizeDelta.y);
        if (hurt.sizeDelta.x > lifePoint.sizeDelta.x)
        {
            //讓傷害量(紅色血條)逐漸追上當前血量
            hurt.sizeDelta += new Vector2(-5f, 0) * Time.deltaTime * 2;
        } else if(hurt.sizeDelta.x < lifePoint.sizeDelta.x)
        {
            hurt.sizeDelta = lifePoint.sizeDelta;
        }

        //回血
        if (currentHealth < maxHealth)
        {
            currentHealth += 10f * Time.deltaTime;
        }

        // Game over
        if (currentHealth <= 0)
        {
            gameOverScreen.Setup();
        }

    }

    public void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "Virus")
        {
            currentHealth = currentHealth - 50f;
            Debug.Log("virus!");
        }
        if (other.gameObject.tag == "Sneezer")
        {
            currentHealth = 0f;
            Debug.Log("You die!");
        }

        if (other.gameObject.tag == "red")
        {
            Flashing flashImage = other.gameObject.GetComponent<Flashing>();
            flashImage.StartFlash(1.5f, 0.5f);
        }
    }
    //in social distance
    public void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "red")
        {
            currentHealth -= 1.2f ;
            Debug.Log("Too close!");
        }
    }

}
