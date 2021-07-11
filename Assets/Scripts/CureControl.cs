using System.Collections;
using System.Collections.Generic;
using System.Dynamic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class CureControl : MonoBehaviour
{
    private float elapsed = 0f;
    const float ELAPSED_TIME = 10f;
    private Vector2 centerPoint;

    [SerializeField] LayerMask whatStopMovement;
    [SerializeField] GameObject syringe;
    private int xGrid;
    private int yGrid;
    // Start is called before the first frame update
    void Start()
    {
        centerPoint = this.gameObject.transform.position;//cureController need to be placed on center

    }

    // Update is called once per frame
    void Update()
    {
        xGrid = Random.Range(-4, 5);
        yGrid = Random.Range(-4, 5);
        Vector2 randomPlace = new Vector2(centerPoint.x + xGrid, centerPoint.y + yGrid);
        

        elapsed += Time.deltaTime;
        if(elapsed >= ELAPSED_TIME && !Physics2D.OverlapCircle(randomPlace, 0.5f, whatStopMovement))
        {
            //if (!Physics2D.OverlapCircle(randomPlace, 0.5f, whatStopMovement))
            {
                Instantiate(syringe, randomPlace, Quaternion.Euler(0f, 0f, 0f));
            }
            //instanciate
            elapsed %= ELAPSED_TIME;
        }

     
    }


}
