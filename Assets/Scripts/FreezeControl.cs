using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FreezeControl : MonoBehaviour
{
    [SerializeField] FreezeScreen freezeScreen;
    [SerializeField] GameObject bullet;

    void Update()
    {
        // if(Input.GetKeyDown(KeyCode.K))
        // {
        //     freezeScreen.Setup();
        // }

        // Debug.Log(bullet.GetComponent<Bullet>().isWrongGuy);

        // if(bullet.GetComponent<Bullet>().isWrongGuy == true)
        // {
        //     Debug.Log("peee");
        //     freezeScreen.Setup();
            
        // }
    }
}
