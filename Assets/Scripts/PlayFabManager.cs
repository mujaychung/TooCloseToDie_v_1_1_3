using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using PlayFab;
using PlayFab.ClientModels;


public class PlayFabManager : MonoBehaviour
{
    public GameObject rowPrefab;
    public Transform rowsParent;

    // Start is called before the first frame update
    void Start()
    {
        Login();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void Login()
    {
        var request = new LoginWithCustomIDRequest
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true
        };
        PlayFabClientAPI.LoginWithCustomID(request, OnSuccess, OnError);
    } 
    void OnSuccess(LoginResult result)
    {
        Debug.Log("Successful login/account create!");
        Debug.Log(this.gameObject);

    }
    void OnError(PlayFabError error)
    {
        Debug.Log("Error while logging in/creating account");
        Debug.Log(error.GenerateErrorReport());
        Debug.Log(this.gameObject);
    }
    public void SendLeaderboard(int score)
    {
        var request = new UpdatePlayerStatisticsRequest
        {
            Statistics = new List<StatisticUpdate>
            {
                new StatisticUpdate
                {
                    StatisticName = "PlatformScore",
                    Value = score
                }
            }
        };
        PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);
    } 
    void OnLeaderboardUpdate(UpdatePlayerStatisticsResult result)
    {
        Debug.Log("Successful leaderboard Sent");
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

    void OnLeaderboardGet(GetLeaderboardResult result) {

        foreach(Transform item in rowsParent)
        {
            Destroy(item.gameObject);
        }

        foreach(var item in result.Leaderboard)
        {
            GameObject newGo = Instantiate(rowPrefab, rowsParent);
            Text[] texts = newGo.GetComponentsInChildren<Text>();
            texts[0].text = (item.Position+1).ToString();
            texts[1].text = item.PlayFabId;
            texts[2].text = item.StatValue.ToString();
 
            Debug.Log(string.Format("PLACE: {0} | ID: {1} | VALUE: {2}",
                item.Position + " " + item.PlayFabId + " " + item.StatValue));
        }
    }
}
 