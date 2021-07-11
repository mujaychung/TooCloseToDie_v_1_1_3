using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class WinScreen : MonoBehaviour
{
    [SerializeField] GameObject hero;
    [SerializeField] Text pointsText;


    private void Start()
    {

    }
    public void Setup (int score)
    {
        hero.GetComponent<Hero>().enabled = false;

        GameObject[] viruses = GameObject.FindGameObjectsWithTag("Virus");
        foreach (GameObject virus in viruses)
        {
            Destroy(virus);
        }

        gameObject.SetActive(true);
        pointsText.text = "You Save "+score.ToString() + " Residents !";

     
    }

    public void RestartButton ()
    {
        SceneManager.LoadScene("MainScene");
    }

    public void ExitButton ()
    {
        SceneManager.LoadScene("Menu");
    }

    public void ToLeaderboardButton()
    {
        SceneManager.LoadScene("LBandName");
    }


}
