using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class FreezeScreen : MonoBehaviour
{    
    [SerializeField] Bullet bullet;
    [SerializeField] GameObject hero;
    [SerializeField] Text countdownText;
    int countdownTime = 3;


    public void Setup ()
    {
        this.gameObject.SetActive(true);
        StartCoroutine(CountDownToStart());
    }

    IEnumerator CountDownToStart ()
    {
        countdownTime = 3;

        hero.GetComponent<Hero>().enabled = false;
        while (countdownTime > 0)
        {
            countdownText.text = "Freezed until  " + countdownTime.ToString() + "s";
            yield return new WaitForSeconds(1f);
            countdownTime -= 1;
        }
        hero.GetComponent<Hero>().enabled = true;
        this.gameObject.SetActive(false);
    }

}
