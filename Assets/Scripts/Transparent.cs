using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Transparent : MonoBehaviour
{

    SpriteRenderer s;

    void Start()
    {
        s = this.gameObject.GetComponent<SpriteRenderer>();
        s.color = Color.red;
    }

    void Update()
    {
        if (s.color[3] > 0.02f)
        {
            s.color -= new Color(0, 0, 0, 0.004f);
        }
        else
        {
            s.color += new Color(0, 0, 0, 0.5f);
        }
        // Debug.Log(s.color[3]);
    }
}
