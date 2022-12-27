#include <stdio.h>
#define size 5
struct circular_queue
{
    int a[size];
    int front;
    int rear;
};
struct circular_queue q;
void insert ();
void delete ();
void display ();

void insert ()
{
    if ((q.front == 0 && q.rear == size -1) || (q.front == q.rear+1))
    {
        printf("\nOverflow ");
    }
    else
    {
        if(q.front == -1 && q.rear == -1)
        {
            q.front = 0;
            q.rear = 0;
        }
        else if (q.rear == size -1)
        {
            q.rear = 0;
        }
        else{
            q.rear+=1;
        }
        int h;
        printf("\nEnter the element ");
        scanf("%d", &h);
        q.a[q.rear] = h;
    }
}

void delete ()
{
    int temp;
    if (q.front == -1 && q.rear == -1)
    {
        printf("\nUnderflow");
    }
    else
    {
        temp = q.a[q.front];
        printf("\nElement deleted is %d ", temp);
        if (q.front == q.rear)
        {
            q.front = -1;
            q.rear = -1;
        }
        else if(q.front == size -1)
        {
            q.front = 0;
        }
        else
        {
            q.front++;
        }
    }
}

void display ()
{
    if (q.front == -1)
    {
        printf("\nUnderflow");
    }
    else 
    {
        if (q.rear >= q.front)
        {
            for (int i = q.front; i <=q.rear ; i++)
            {
                printf("%d", q.a[i]);
            }
        }
        else 
        {
            for (int i= q.front; i!= q.rear; i=(i+1)%size)
            {
                printf("%d", q.a[i]);
            }
            printf("%d", q.a[q.rear]);
        }
    }
}

void main ()
{
    int n=0;
    q.front = -1;
    q.rear = -1;
    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    while (n!= 4)
    {
        printf("\nEnter your choice ");
        scanf("%d", &n);
        switch (n)
        {
            case 1: insert ();
            break;

            case 2: delete ();
            break;

            case 3: display ();
            break;

            case 4: printf("Exit") ;
            break;

            default: printf("invalid input ");
            break;
        }
    }
}