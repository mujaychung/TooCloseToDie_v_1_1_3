using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine.SceneManagement;
using TMPro;

public class LBandName : MonoBehaviour
{
    [SerializeField] Text Score;
    [SerializeField] Text Highest;
    [SerializeField] InputField nameInput;

    [SerializeField] Transform rowsParent;
    [SerializeField] GameObject rowPrefab;
    int m_score;
    // Start is called before the first frame update
    void Start()
    {
        Scene currentScene = SceneManager.GetActiveScene();
        string sceneName = currentScene.name;
        if (sceneName == "LBandName")
        {
            m_score = Count.score;
            Score.text = m_score.ToString();

            //get current LB (not having this record)
            GetLeaderboard();
            GetPlayerData();
            //highest code
            
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnError(PlayFabError error)
    {
        Debug.Log("Error while logging in/creating account");
        Debug.Log(error.GenerateErrorReport());
    }

    public void SentButton()
    {
        var request = new UpdatePlayerStatisticsRequest
        {
            Statistics = new List<StatisticUpdate>
            {
                new StatisticUpdate
                {
                    StatisticName = "PlatformScore",
                    Value = m_score
                }
            }
        };
        PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);

        var request_name = new UpdateUserTitleDisplayNameRequest
        {
            DisplayName = nameInput.text,
        };
        PlayFabClientAPI.UpdateUserTitleDisplayName(request_name, OnDisplayNameUpdate, OnError);
        
    }
    void OnLeaderboardUpdate(UpdatePlayerStatisticsResult result)
    {
        Debug.Log("Successful leaderboard Sent");
        GetLeaderboard();
    }

    void OnDisplayNameUpdate(UpdateUserTitleDisplayNameResult result)
    {
        Debug.Log("Sent successfully!");
        GetLeaderboard();
        SetUserData(m_score);

    }

    void OnSentUpdate(UpdatePlayerStatisticsResult result)
    {

    }

    public void GetLeaderboard()
    {
        var request = new GetLeaderboardRequest
        {
            StatisticName = "PlatformScore",
            StartPosition = 0,
            MaxResultsCount = 10
        };
        PlayFabClientAPI.GetLeaderboard(request, OnLeaderboardGet, OnError);

    }

    void OnLeaderboardGet(GetLeaderboardResult result)
    {

        foreach (Transform item in rowsParent)
        {
            Destroy(item.gameObject);
        }

        foreach (var item in result.Leaderboard)
        {
            GameObject newGo = Instantiate(rowPrefab, rowsParent);
            Text[] texts = newGo.GetComponentsInChildren<Text>();
            texts[0].text = (item.Position + 1).ToString();
            texts[1].text = item.DisplayName;
            texts[2].text = item.StatValue.ToString();

            Debug.Log(string.Format("PLACE: {0} | ID: {1} | VALUE: {2}",
                item.Position ,  item.PlayFabId , item.StatValue));
        }
    }
    public void GetPlayerData()
    {
        PlayFabClientAPI.GetUserData(new GetUserDataRequest()
        {
            PlayFabId = logging.m_ID,
            Keys = null // null -> return all data
        }, UserDataSuccess, OnError);
    }

    void UserDataSuccess(GetUserDataResult result)
    {
        if (result.Data == null || !result.Data.ContainsKey("score"))
        {
            Debug.Log("No record");
            Highest.text = Score.text;
        }
        else if (m_score > int.Parse(result.Data["score"].Value))//本次比record高
        {
            Highest.text = Score.text;
        }
        else//本次比record低
        {
            Highest.text = result.Data["score"].Value;
            Debug.Log(result.Data["score"].Value);
        }
    }

    public void SetUserData(int scoreRecord)
    {
        var request = new UpdateUserDataRequest
        {
            //not sure if Dictionary is necessary 
            Data = new Dictionary<string, string>
            {
                {"score", scoreRecord.ToString()}
            }
        };
        PlayFabClientAPI.UpdateUserData(request, SetDataSuccess, OnError);
    }

    void SetDataSuccess(UpdateUserDataResult result)
    {
        Debug.Log(result.DataVersion);
    }

    public void MenuButton()
    {
        SceneManager.LoadScene("Menu");
    }

    public void RestartButton()
    {
        SceneManager.LoadScene("MainScene");
    }
}
