using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Events;

public class RemainCountUI : MonoBehaviour
{
    [SerializeField] Count countController;
    float elapsed = 0f;
    // const float ELAPSED_TIME = 1f;

    Color originalColor;

    void Start()
    {
        originalColor = this.gameObject.GetComponent<Text>().color;
    }

    void Update()
    {
        this.gameObject.GetComponent<Text>().text = countController.normalerCount.ToString();

        if (countController.normalerCount == 1)
        {
            elapsed += Time.deltaTime;

            if (elapsed <= 0.5f) ChangeColor(Color.red);
            else if (elapsed <= 1) ChangeColor(originalColor);
            else elapsed %= 1; // back to 0
        }
    }

    void ChangeColor(Color color)
    {
        this.gameObject.GetComponent<Text>().color = color;
    }
}