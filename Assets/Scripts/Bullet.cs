using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    float bullet_speed = 6f;
    int direction;
    GameObject hero;
    Hero hero_script;
    public bool hero_movable = true;
    float shootTime, currentTime;
    float test;
    bool shootable = false;


    void Start()
    {
        hero = GameObject.Find("Hero");
        hero_script = hero.GetComponent<Hero>();
        direction = hero_script.direction;
        //movable = hero_script.movable;

        shootTime = Time.fixedTime;
        Debug.Log(test);
        test = 1 / 2 / bullet_speed;
    }


    void Update()
    {
        currentTime = Time.fixedTime;
        if (direction == 0)
            this.transform.Translate(Vector3.right * bullet_speed * Time.deltaTime);
        else if (direction == 1)
            this.transform.Translate(Vector3.left * bullet_speed * Time.deltaTime);
        else if (direction == 2)
            this.transform.Translate(Vector3.up * bullet_speed * Time.deltaTime);
        else
            this.transform.Translate(Vector3.down * bullet_speed * Time.deltaTime);

        if ((currentTime - shootTime) * bullet_speed >= 1/2)
        {
            shootable = true;
            Debug.Log("shootable");
        }

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (shootable) {
            if (collision.gameObject.layer == 8) // Layer 8: StopMovement
            {
                Destroy(this.gameObject);
                // Debug.Log("explode");
            }

            if (collision.gameObject.tag == "Sneezer" || collision.gameObject.layer == 9)// Layer 9: Virus
            {
                Destroy(collision.gameObject);
                Destroy(this.gameObject);
                // Debug.Log("Attacked");
            }



            if (collision.gameObject.tag == "Normaler")
            {
                Destroy(this.gameObject);
                Destroy(collision.gameObject);

                GameObject.Find("Canvas").transform.GetChild(3).GetComponent<FreezeScreen>().Setup();
            }
        }
    
    }


}
