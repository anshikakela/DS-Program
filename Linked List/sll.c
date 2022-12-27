#include <stdio.h>
typedef struct sl
{
    int data;
    struct sl *link;
}node;

void main ()
{
    node n1,n2,n3,new,*start=NULL;
    node *ptr = NULL;
    start = &n1;
    n1.data = 10;
    n1.link = &n2;
    n2.data = 20;
    n2.link = &n3;
    n3.data = 30;
    n3.link = NULL;
    ptr = start;
    while (ptr!= NULL) {
        printf("%d ", ptr->data);
        ptr= ptr->link;
    }
}


// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// void count_of_nodes();
// int main()
// {
//     struct node *head = malloc(sizeof(struct node));
//     struct node *current = malloc(sizeof(struct node));
//     struct node *current1 = malloc(sizeof(struct node));
//     head -> data = 45;
//     head -> link = current;
    
//     current -> data = 98;
//     current -> link = current1;
    
//     // head -> link = current1;
//     current1 -> data = 3;
//     current1 -> link = NULL;
//     // head -> link  = current;
//     count_of_nodes (head);
// }
// void count_of_nodes(struct node *head){
//         int count =0;
//         if(head == NULL)
//         printf("Linked list is Empty");
//         struct node *ptr = NULL;
//         ptr = head;
//         while(ptr != NULL)
//         {
//             count ++;
//             ptr = ptr -> link;
//         } 
//         printf("%d", count);
//     }


