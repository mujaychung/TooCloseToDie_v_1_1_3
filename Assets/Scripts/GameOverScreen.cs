using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameOverScreen : MonoBehaviour
{    
    [SerializeField] GameObject hero;
    [SerializeField] FreezeScreen freezeScreen;
    
    public void Setup ()
    {

        gameObject.SetActive(true);
        Destroy(hero);
        if (freezeScreen.gameObject.activeSelf)
        {
            freezeScreen.gameObject.SetActive(false);
        }
    }

    public void RestartButton ()
    {
        SceneManager.LoadScene("MainScene");
    }

    public void ExitButton ()
    {
        SceneManager.LoadScene("Menu");
    }
}
