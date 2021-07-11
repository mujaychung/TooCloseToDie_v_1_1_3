using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

public class Count : MonoBehaviour
{
    int sneezerCount;
    public int normalerCount;
    int virusCount;
    public static int score;

    [SerializeField] GameOverScreen gameOverScreen;
    [SerializeField] WinScreen winScreen;
    //[SerializeField] GameObject playfab_controller;
    //PlayFabManager playfabmanager_script;


    private void Start() 
    {
        //playfabmanager_script = playfab_controller.GetComponent<PlayFabManager>();
    }

    void Update()
    {
        GameObject[] sneezers = GameObject.FindGameObjectsWithTag("Sneezer");
        sneezerCount = sneezers.Length;

        GameObject[] normalers = GameObject.FindGameObjectsWithTag("Normaler");
        normalerCount = normalers.Length;

        GameObject[] viruses = GameObject.FindGameObjectsWithTag("Virus");
        virusCount = viruses.Length;

        if (normalerCount == 0) // Lose (no more healthyman)
        {
            gameOverScreen.Setup();
        }

        if(sneezerCount == 0) // Win (no more sneezer)
        {
            Win(normalerCount);
            score = normalerCount;
        }
    }

    void Win(int score)
    {
        winScreen.Setup(score);
        //playfabmanager_script.SendLeaderboard(score);
    }
}
