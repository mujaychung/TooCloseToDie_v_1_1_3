using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthyMan : MonoBehaviour
{
    int direction;
    float moveSpeed;
    public float normalMoveSpeed = 0.5f;
    [SerializeField] Transform movePoint;
    [SerializeField] GameObject sneezer;
    CapsuleCollider2D selfCollider;

    [SerializeField] LayerMask whatStopMovement;

    //Animation
    private Animator m_animator;
    private string currentState;

    const string BACK = "back";
    const string FRONT = "front";
    const string LEFT = "left";
    const string RIGHT = "right";
    const string SICK = "sick";

    void Start()
    {
        movePoint.parent = null;
        moveSpeed = normalMoveSpeed;
        m_animator = GetComponent<Animator>();
        selfCollider = sneezer.GetComponent<CapsuleCollider2D>();
    }

    void FixedUpdate()
    {
        if(!m_animator.GetCurrentAnimatorStateInfo(0).IsName("sick"))
        {
            moveSpeed = normalMoveSpeed;
            Wander();
        }
    }

    void ChangeAnimationState(string newState)
    {
        if (currentState == newState) return;

        m_animator.Play(newState);
        currentState = newState;
    }


    void Wander()
    {
        this.transform.position = Vector3.MoveTowards(transform.position, movePoint.position, moveSpeed * Time.deltaTime);

        if (Vector3.Distance(this.transform.position, movePoint.position) <= 0.05f)
        {
            direction = Random.Range(0, 4);
            Vector3 deltaPos;

            if (direction == 0)//right
            {
                deltaPos = new Vector3(1, 0, 0);

                // call animation

                ChangeAnimationState(RIGHT);
            }
            else if (direction == 1)//left
            {
                deltaPos = new Vector3(-1, 0, 0);
                // call animation

                ChangeAnimationState(LEFT);
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

            if (!Physics2D.OverlapCircle(movePoint.position + deltaPos, 0.2f, whatStopMovement))
            {
                movePoint.position += deltaPos;
            }
        }
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Virus")//virus
        {
            Destroy(collision.gameObject);
            Debug.Log("virus!");
            sick();
        }
        if (collision == selfCollider)//sneezer
        { 
            Debug.Log("Sneezer!");
            sick();
        }

    }

    void sick()
    {
        ChangeAnimationState(SICK);
        Invoke("sickCompleted", 1.3f);

    }

    void sickCompleted()
    {
        Destroy(this.gameObject);
        Instantiate(sneezer, movePoint.position, movePoint.rotation);
    }
}
