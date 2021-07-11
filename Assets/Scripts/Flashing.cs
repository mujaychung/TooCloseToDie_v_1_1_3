using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Flashing : MonoBehaviour
{
    SpriteRenderer image;
    Coroutine currentFlashRoutine = null;
    
    private void Awake()
    {
        image = this.GetComponent<SpriteRenderer>();
        image.color = new Color(1, 0, 0, 0);
    }

    public void StartFlash(float sceondsForOneFlash, float maxAlpha)
    {
        // Ensure maxAlpha is not above 1
        maxAlpha = Mathf.Clamp(maxAlpha, 0, 1);

        if(currentFlashRoutine != null)
        {
            StopCoroutine(currentFlashRoutine);
        }
        currentFlashRoutine = StartCoroutine(Flash(sceondsForOneFlash, maxAlpha));
    }

    IEnumerator Flash(float sceondsForOneFlash, float maxAlpha)
    {
        // Animate flash in
        float flashInDuration = sceondsForOneFlash / 2;
        for(float t = 0; t <= flashInDuration; t += Time.deltaTime)
        {
            // Create a new color change
            Color colorThisFrame = image.color;
            colorThisFrame.a = Mathf.Lerp(0, maxAlpha, t / flashInDuration);
            image.color = colorThisFrame;

            // Wait until the next frame
            yield return null;
        }

        // Animate flash out
        float flashOutDuration = sceondsForOneFlash / 2;
        for(float t = 0; t <= flashOutDuration; t += Time.deltaTime)
        {
            // Create a new color change
            Color colorThisFrame = image.color;
            colorThisFrame.a = Mathf.Lerp(maxAlpha, 0, t / flashOutDuration);
            image.color = colorThisFrame;

            // Wait until the next frame
            yield return null;
        }

        // Ensure aplha is set to 0
        image.color = new Color(1, 0, 0, 0);
    }
}
