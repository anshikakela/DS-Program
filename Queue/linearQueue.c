#include <stdio.h>
#define size 10
struct queue
{
    int a[size];
    int front;
    int rear;
};
struct queue q;
void insert();
void del();
void display();

void insert()
{
    if (q.front == 0 && q.rear == size-1)
        printf("\nQueue overflow ");
    else
    {
        if (q.front == -1) {
            q.front = 0;
        }
        q.rear++;
        int h;
        printf("\nEnter the element ");
        scanf("%d", &h);
        q.a[q.rear] = h;
    }
}
void del()
{
    int temp;
    if (q.front == -1 && q.rear == -1)  {
        printf("\nQueue under flow ");
    }
    
    
    else
    {
        temp = q.a[q.front];
        printf("\nElement deleted is %d ",temp);
        if (q.front == q.rear) {
            q.front =-1;
            q.rear = -1;
        }
        else {
        q.front++;
        }
    }
}
void display()
{
    if ( q.front == -1)
        printf("\nUnderflow");
    else
    {
        for (int i = q.front; i <= q.rear; i++)
            printf("%d ", q.a[i]);
    }
}
void main()
{
    int n = 0;
    q.front = -1;
    q.rear = -1;
    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Display \n");
    printf("4. exit\n");
    while (n != 4)
    {
        printf("\nEnter your choice ");
        scanf("%d", &n);
        switch (n)
        {
            case 1:
            insert();
            break;
            case 2:
            del();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("exit");
            break;
            default:
            printf("invalid input ");
            break;
        }
    }
}