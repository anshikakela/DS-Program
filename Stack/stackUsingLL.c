#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
typedef struct NODE
{
    int data;
    struct NODE *link;    
}node;

node* getnode()
{
    node *n1;
    n1= (node*)malloc(sizeof(node));
    n1->link=NULL;
    return n1;
}

node* create ()
{
    node *new1, *temp, *new,*start;
    int element;
    char ans='y';
    printf("\nEnter the element\n");
    scanf("%d",&element);
    new= getnode ();
    start=new;
    temp=start;
    new->data=element;
    new->link=NULL;
    printf("\nDo you want to enter more element: y or n\n");
    ans= getche();
    while(ans=='y')
    {
        printf("\nEnter the element\n");
        scanf("%d",&element);
        new1=getnode ();
        if(new1==NULL)
        {
            printf("Overflow\n");
        }
        else
        {
            temp->link=new1;
            new1->data=element;
            temp=new1;
            new1->link=NULL;
        }
        printf("\nDo you want to enter more elements:y or n\n");
        ans=getche ();
    }
    getch();
    return start;
}

void display (node *start)
{
    node *temp;
    temp=start;
    if(temp==NULL)
    {
        printf("\nThe list is empty\n");
        getch();
    }
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL");
}

node* push(node* start)
{
    node *new;
    int element;
    printf("\nEnter the element ");
    scanf("%d",element);
    new=(node*)malloc(sizeof(node));
    if(new==NULL)
    {
        printf("\nOverflow\n");
        exit(0);
    }
    new->data=element;
    new->link=start;
    start=new;
    return (start);
}

node* pop(node* start)
{
    node *temp, *ptr;
    if(start==NULL)
    {
        printf("\nUnderflow\n");
        exit(0);
    }
    ptr=start;
    while(ptr->link!=NULL)
    {
        temp=ptr;
        ptr=ptr->link;
    }
    temp->link=NULL;
    free(ptr);
    return(start);
}

void main ()
{
    int ch;
    char ans;
    node *start;
    start=NULL;
    do {
    printf("\nOperation on Stack-\n");
    printf("1\tCreate\n2\tDisplay\n3\tInsert\n4\tDelete\n");
    printf("\nEnter your choice\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:start=create ();
        display(start);
        break;

    case 2:display (start);
        break;

    case 3:start=push (start);
        display(start);
        break;

    case 4:start=pop (start);
        display(start);
        break;
    
    default: printf("Invalid Opiton");
        break;
    }
    printf("\nDo you want to perform more functions: y or n\n");
    ans=getche();
}while(ans=='y');
}
