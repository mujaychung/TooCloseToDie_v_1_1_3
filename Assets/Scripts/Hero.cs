using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Hero : MonoBehaviour
{
    //Move
    float moveSpeed = 2.5f;
    public Transform movePoint;
    public int direction = 1; // 0: right, 1: left, 2: up, 3: down
    [SerializeField] LayerMask whatStopMovement;
    bool ready = false;
    float countDown = 0.3f;//大於0.3秒的話開始走路
    bool movable = true;


    //Bullet
    [SerializeField] GameObject bullet_prefab;//bullet
    public RectTransform Cure_0;
    public RectTransform Cure_1;
    public RectTransform Cure_2;

    //public RectTransform cure;

    float bulletCount = 3f;
    const float MAX_BULLET = 3f;
    const float BULLET_PER_SECOND = 0.2f; // Reload speed
    const float CURE_HEIGHT = 0.3f;
    const float CURE_WEIGHT = 1f;
    Vector2 CURE_SIZE = new Vector2(CURE_WEIGHT, CURE_HEIGHT);
    //Animator
    private string currentState;
    private Animator m_animator;

    const string FRONT_STANDING = "front_standing";
    const string BACK_STANDING = "back_standing";
    const string LEFT_STANDING = "left_standing";
    const string RIGHT_STANDING = "right_standing";
    const string FRONT_MOVE = "front_move";
    const string BACK_MOVE = "back_move";
    const string LEFT_MOVE = "left_move";
    const string RIGHT_MOVE = "right_move";
    const float ANI_TIME = 0.85f;



    private void Awake()
    {
        m_animator = GetComponent<Animator>();
    }

    void Start()
    {
        movePoint.parent = null;

    }

    void Update()
    {


        #region Basic Control with Facing Direction Considered
        if (movable)
        {

            this.transform.position = Vector3.MoveTowards(transform.position, movePoint.position, moveSpeed * Time.deltaTime);

            if (Vector3.Distance(this.transform.position, movePoint.position) <= 0.05f)
            {
                //ChangeAnimationState(FRONT_STANDING);

                if (Input.GetKey(KeyCode.RightArrow)) // Press right button
                {
                    if (direction == 0) // Already facing right
                    {
                        if (ready == true)
                        {
                            if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(1f, 0f, 0f), 0.2f, whatStopMovement)) // Collider detection
                            {
                                movePoint.position += new Vector3(1f, 0f, 0f);
                                ChangeAnimationState(RIGHT_MOVE);

                                Invoke("WalkCompleted", ANI_TIME);

                            }
                        }
                        else
                        {
                            ready = true;
                            StartCoroutine(readyTime());

                        }
                    }
                    else // Not facing right
                    {
                        direction = 0;
                        ready = false;

                        // Call turning animation
                        ChangeAnimationState(RIGHT_STANDING);

                    }
                }


                if (Input.GetKey(KeyCode.LeftArrow)) // Press left button
                {
                    if (direction == 1) // Already facing left
                    {
                        if (ready == true)
                        {
                            if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(-1f, 0f, 0f), 0.2f, whatStopMovement)) // Collider detection
                            {
                                movePoint.position += new Vector3(-1f, 0f, 0f);
                                ChangeAnimationState(LEFT_MOVE);
                                Invoke("WalkCompleted", ANI_TIME);
                            }
                        }
                        else//還沒等過0.5秒
                        {
                            ready = true;
                            StartCoroutine(readyTime());
                        }
                    }
                    else //要轉向
                    {
                        direction = 1;
                        ready = false;

                        // Call turning animation
                        ChangeAnimationState(LEFT_STANDING);

                    }
                }

                if (Input.GetKey(KeyCode.UpArrow)) // Press up button
                {
                    if (direction == 2) // Already facing left
                    {
                        if (ready == true)
                        {
                            if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(0f, 1f, 0f), 0.2f, whatStopMovement)) // Collider detection
                            {
                                movePoint.position += new Vector3(0f, 1f, 0.1f);
                                ChangeAnimationState(BACK_MOVE);
                                Invoke("WalkCompleted", ANI_TIME);
                            }
                        }
                        else
                        {
                            ready = true;
                            StartCoroutine(readyTime());
                        }
                    }
                    else // Not facing left
                    {
                        direction = 2;
                        ready = false;

                        // Call turning animation
                        ChangeAnimationState(BACK_STANDING);

                    }
                }

                if (Input.GetKey(KeyCode.DownArrow)) // Press down button
                {
                    if (direction == 3) // Already facing down
                    {
                        if (ready == true)
                        {
                            if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(0f, -1f, 0f), 0.2f, whatStopMovement)) // Collider detection
                            {
                                movePoint.position += new Vector3(0f, -1f, -0.1f);
                                ChangeAnimationState(FRONT_MOVE);
                                Invoke("WalkCompleted", ANI_TIME);
                            }
                        }
                        else
                        {
                            ready = true;
                            StartCoroutine(readyTime());
                        }

                    }
                    else // facing    
                    {
                        direction = 3;
                        ready = false;

                        // Call turning animation

                        ChangeAnimationState(FRONT_STANDING);
                    }
                }


            }
            #endregion



            #region Shoot Bullets

            // Bullet Reload
            bulletCount = Mathf.Clamp(bulletCount + Time.deltaTime * BULLET_PER_SECOND, 0f, MAX_BULLET);

            if (bulletCount >= 2)
            {
                Cure_0.sizeDelta = new Vector2(bulletCount - 2f, CURE_HEIGHT);
                Cure_1.sizeDelta = CURE_SIZE;
                Cure_2.sizeDelta = CURE_SIZE;

            }
            else if (bulletCount < 2 && bulletCount >= 1)
            {
                Cure_0.sizeDelta = new Vector2(0f, CURE_HEIGHT);
                Cure_1.sizeDelta = new Vector2(bulletCount - 1f, 0.3f);
                Cure_2.sizeDelta = CURE_SIZE;
            }
            else if (bulletCount <= 1)
            {
                Cure_0.sizeDelta = new Vector2(0f, CURE_HEIGHT);
                Cure_1.sizeDelta = new Vector2(0f, CURE_HEIGHT);
                Cure_2.sizeDelta = new Vector2(bulletCount, CURE_HEIGHT);
            }



            // Shooting
            if (Input.GetKeyDown(KeyCode.Space))
            {
                if (bulletCount >= 1f)
                {
                    Shoot();
                }
                else
                {
                    StartCoroutine(redAMoment());
                }
            }


            #endregion
        }
    }

    IEnumerator redAMoment()
    {
        Cure_2.GetComponent<Image>().color = Color.red;
        yield return new WaitForSeconds(0.2f);
        Cure_2.GetComponent<Image>().color = new Color(0.3f, 0.9f, 1f, 1);

    }

    IEnumerator readyTime()
    {
        movable = false;
        yield return new WaitForSeconds(countDown);
        movable = true;
    }


    void Shoot()
    {
        Instantiate(bullet_prefab, movePoint.position, movePoint.rotation);
        bulletCount -= 1f;
    }

    void ChangeAnimationState(string newState)
    {
        if (currentState == newState) return;

        m_animator.Play(newState);
        currentState = newState;
    }

    void WalkCompleted()
    {
        if (m_animator.GetCurrentAnimatorStateInfo(0).IsName("front_move"))
            ChangeAnimationState(FRONT_STANDING);

        if (m_animator.GetCurrentAnimatorStateInfo(0).IsName("back_move"))
            ChangeAnimationState(BACK_STANDING);

        if (m_animator.GetCurrentAnimatorStateInfo(0).IsName("left_move"))
            ChangeAnimationState(LEFT_STANDING);

        if (m_animator.GetCurrentAnimatorStateInfo(0).IsName("right_move"))
            ChangeAnimationState(RIGHT_STANDING);
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "Syringe")
        {
            Debug.Log("syringe!");
            bulletCount = 3;
            Destroy(other.gameObject);

        }
    }

}