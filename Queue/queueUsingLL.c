#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
typedef struct node
{
    int fdata;
    struct node *flink;
    int rdata;
    struct node *rlink;    
}node;

node *getnode()
{
    node *n1;
    n1=(node*)malloc(sizeof(node));
    n1->rlink=NULL;
    return n1;
}

node *create()
{
    node *new1,*temp,*new,*start;
    int element;
    int ans=1;
    printf("\nEnter the element\n");
    scanf("%d",&element);
    new=getnode();
    start=new;
    temp=start;
    new->rdata=element;
    new->rlink=NULL;
    printf("\nDo you want to enter more elements: 1 or 0\n");
    scanf("%d",ans)
    while(ans==1)
    {
        printf("\nEnter the element\n");
        scanf("%d",&element);
        new1=getnode();
        if(new1==NULL)
        {
            printf("\nOverflow");
        }
        else
        {
            temp->rlink=new1;
            new1->rdata=element;
            temp=new1;
            new1->rlink=NULL;
        }
        // fflush(NULL);
        printf("\nDo you want to enter more elements: 1 or 0 ");
        scanf("%d",&ans);
        //scanf("%c",&ans);
    }
    // getch();
    return start;
}

void display(node *start)
{
    node *temp;
    temp=start;
    if (temp==NULL)
    {
        printf("\nThe list is empty\n");
        getch();
    }
    while(temp!=NULL)
    {
        printf("%d->",temp->fdata);
        temp=temp->flink;
    }
    printf("NULL");
}

node* insert(node* start)
{
    node *new;
    int element;
    printf("\nEnter the element\n");
    scanf("%d",&element);
    new=(node*)malloc(sizeof(node));
    if(new==NULL)
    {
        printf("\nOverflow");
        exit(0);
    }
    new->rdata=element;
    new->rlink=start;
    start=new;
    return(start);
}

node* delete(node* start)
{
    node *temp;
    if(start==NULL)
    {
        printf("\nUnderflow");
        exit(0);
    }
    temp=start;
    start=temp->flink;
    free(temp);
    return(start);
}

void main ()
{
    int ch;
    char ans;
    node *start;
    start=NULL;
    do 
    {
        printf("\nProgram to perform various operation queue ");
        printf("\n1\tCreate\n2\tDisplay\n3\tInsert\n4\tDelete\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:start=create ();
            display(start);
            break;

        case 2:display(start);
            break;

        case 3:start=insert(start);
            display(start);
            break;

        case 4:start=delete(start);
            display(start);
            break;
        
        default:printf("Invalid choice\n");
            break;
        }
        printf("\nDo you want to perform more operations: y or n\n");
        ans=getche();
    }while(ans=='y');
}