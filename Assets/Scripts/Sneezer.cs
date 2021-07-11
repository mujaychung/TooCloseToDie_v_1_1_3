using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering;

public class Sneezer : MonoBehaviour
{
    int verticalOrHorizontal;
    int moveOrSneeze;
    int direction;

    float moveSpeed;
    public float normalMoveSpeed = 0.5f;
    [SerializeField] Transform movePoint;
    [SerializeField] LayerMask whatStopsMovement;
    [SerializeField] LayerMask virus_prefab;

    [SerializeField] GameObject virus;

    //Animation
    private Animator m_animator;
    private string currentState;

    const string STANDING = "Standing";
    const string BACK = "Back";
    const string FRONT = "Front";
    const string LEFTMOVE = "LeftMove";
    const string RIGHTMOVE = "Rightmove";
    const string SNEEZE = "Sneeze";

    void Start()
    {
        movePoint.parent = null;
        m_animator=GetComponent<Animator>();
        moveSpeed = normalMoveSpeed;
    }

    void ChangeAnimationState(string newState)
    {
        if (currentState == newState) return;

        m_animator.Play(newState);
        currentState = newState;
        //ChangeAnimationState(STANDING);
    }

    private void LateUpdate()
    {

    }

    void FixedUpdate()
    {

        if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName("Sneeze"))
        {
            moveSpeed = normalMoveSpeed;
            Wander();
        }


    }
    /*
    void Wander()
    {
        this.transform.position = Vector3.MoveTowards(transform.position, movePoint.position, moveSpeed * Time.deltaTime);

        if (Vector3.Distance(this.transform.position, movePoint.position) <= 0.05f)
        {
            direction = Random.Range(0, 4);
            moveOrSneeze = Random.Range(0, 3); // 0 -> sneeze, 1 or -1 -> move

            Vector3 deltaPos;

            if (direction == 0)//right
            {
                deltaPos = new Vector3(1, 0, 0);

                // call animation
                ChangeAnimationState(RIGHTMOVE);
            }
            else if (direction == 1)//left
            {
                deltaPos = new Vector3(-1, 0, 0);

                // call animation
                ChangeAnimationState(LEFTMOVE);
            }
            else if (direction == 2)//up
            {
                deltaPos = new Vector3(0, 1, 0.1f);

                // call animation
                ChangeAnimationState(BACK);
            }
            else//down
            {
                deltaPos = new Vector3(0, -1, -0.1f);

                // call animation
                ChangeAnimationState(FRONT);

            }
            if (moveOrSneeze == 0)
            {
                if (!Physics2D.OverlapCircle(this.transform.position, 0.5f, virus_prefab))//there is no virus
                {

                    Sneeze();
                }
                else
                {
                    if (!Physics2D.OverlapCircle(movePoint.position + deltaPos, 0.2f, whatStopsMovement))
                    {
                        movePoint.position += deltaPos;
                    }
                }
                }
        }
    }
*/
    void Wander()
    {

        this.transform.position = Vector3.MoveTowards(transform.position, movePoint.position, moveSpeed * Time.deltaTime);

        if (Vector3.Distance(this.transform.position, movePoint.position) <= 0.05f)
        {
            //m_animator.SetInteger("SneezeOrMove", 2);
            verticalOrHorizontal = Random.Range(0, 2); // 0 -> horizontal, 1 -> vertical
            moveOrSneeze = Random.Range(-1, 2); // 0 -> sneeze, 1 or -1 -> move

            if (verticalOrHorizontal == 0) // left and right
            {
                if (moveOrSneeze == 0) // sneeze
                {
                    if (!Physics2D.OverlapCircle(this.transform.position, 0.5f, virus_prefab))//there is no virus
                    {
                        Sneeze();
                        
                    }
                    else Debug.Log("virus detected, no sneeze");
                }
                else // move left or right
                {
                    if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(moveOrSneeze, 0f, 0f), 0.2f, whatStopsMovement))//accessible
                    {
                        movePoint.position += new Vector3(moveOrSneeze, 0f, 0f);
                        //m_animator.SetInteger("SneezeOrMove", moveOrSneeze);
                        if (moveOrSneeze == 1) ChangeAnimationState(RIGHTMOVE);

                        else ChangeAnimationState(LEFTMOVE);
                    }

                }
            }
            else if (verticalOrHorizontal == 1) // up and down
            {
                if (moveOrSneeze == 0) // sneeze
                {
                    if (!Physics2D.OverlapCircle(this.transform.position, 0.5f, virus_prefab))//there is no virus
                    {
                        Sneeze();
                        
                    }
                    else Debug.Log("virus detected, no sneeze");
                }
                else // move up or down
                {
                    if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(0f, moveOrSneeze, 0f), 0.2f, whatStopsMovement))//accessible
                    {
                        //m_animator.SetInteger("SneezeOrMove", moveOrSneeze);
                        if (moveOrSneeze == 1)
                        {
                            movePoint.position += new Vector3(0f, moveOrSneeze, 0.1f);
                            ChangeAnimationState(BACK);
                        }

                        else
                        {
                            movePoint.position += new Vector3(0f, moveOrSneeze, -0.1f);
                            ChangeAnimationState(FRONT);
                        }
                    }

                }
            }

        }
    }

    void Sneeze ()
    {
  
        ChangeAnimationState(SNEEZE);
        Invoke("SneezeCompleted", 1f);


    }

    void SneezeCompleted()
    {
        Instantiate(virus, this.transform.position + new Vector3(0f,-0.3f,0.05f), movePoint.rotation);
        ChangeAnimationState(STANDING);
    }

}
