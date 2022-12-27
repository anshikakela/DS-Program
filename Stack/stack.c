#include <stdio.h>
#define size 10
typedef struct
{
    int a[size];
    int top;
}stack_type;

int initial(stack_type *v)
{
    v->top = -1;
}

int Overflow(stack_type *v)
{
    if (v->top == size - 1)
        return 0;

    else
        return 1;
}

int Underflow(stack_type *v)
{
    if (v->top == -1)
        return 0;

    else
        return 1;
}

int push(stack_type *v)
{
    int ele;
    printf("Enter element ");
    scanf("%d", &ele);
    v->top++;
    v->a[v->top] = ele;
    printf("%d push to stack\n", ele);
}

int pop(stack_type *v)
{
    int temp = v->a[v->top];
    v->top--;
    return temp;
}

int display(stack_type *v)
{
    printf("The top of stack element is %d\n", v->a[v->top]);
}

int main()
{
    stack_type S;
    initial(&S);
    int n, U, O, temp;
    char ch;
    do
    {
        printf("Enter your choice:-\n1.PUSH\n2.POP\n3.DISPLAY\n");
        scanf("%d", n);
        switch (n)
        {

        case 1:
            O = Overflow(&S);

            if (O == 0)
            {
                printf("The stack has overflowed\n");
                break;
            }

            else
            push(&S);
            break;
        case 2:
            U = Underflow(&S);

            if (U == 0)
            {
                printf("The stack has underflowed\n");
                break;
            }

            else
            {
                temp = pop(&S);
                printf("The element %d is poped from stack\n", temp);
                break;
            }

        case 3:
            display(&S);
            break;
        default:
            break;
        }
        printf("Do you want to continue press y\n if not then press n\n ");
        scanf("\n%c", &ch);
    } while (ch == 'y');
    return 0;
}




// #include<stdio.h>
// #define size 10 
// typedef struct stack  //creation of a structure
// {
//     int top;
//     int element[size];
// }stack_type;  //you have defined a data type named as stack_type

// void init (stack_type *)  //for initialization of our stack
// int underflow(stack_type *)  //to check the condition of underflow
// int overflow(stack_type *)  //to check the condition of overflow
// int pop(stack_type *)  //to delete the element from the stack
// void push (stack_type *, int)  //to insert the element from the stack
// void display (stack_type *)  //to display the element from the stack

// void main() 
// {
//     stack_type s;  //s is denoting the stack
//     int x, op;
//     init(&s);  //top will be initialized to -1
//     do
//     {
//         printf("\n\nOperations- \n1)PUSH\n2)POP\n3)DISPLAY\n4)EXIT");
//         printf("\nEnter your choice: ");
//         scanf("%d",&op);    
//         switch (op)
//         { 
//             case 1:printf("\nEnter the number= ");
//             scanf("%d",&x);
//             if(!overflow(&x)) {
//                 push(&s,x);
//             }
//             else {
//                 printf("\nStack is empty");
//             }
//             break;

//             case 2:if(!underflow(&s))  {   //pop
//                 x= pop(&s);
//                 printf("\nPopped element is %d",x);
//             }
//             else {
//                 printf("\nStack is empty");
//             }
//             break;

//             case 3:display(&s);  {
//                 break;
//             } 
//         }
//     }while(op!=4)
// }

// void init (stack_type *s)
// {
//     s->top= -1;
// }

// int underflow (stack_type *s)
// {
//     if(s-> top == -1) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int overflow (stack_type *s)
// {
//     if (s->top == size -1) {
//         return (1);
//     }
//     else {
//         return (0); 
//     }
// }

// void push (stack_type *s, int x)
// {
//     s->top =s->top+1;  //increament of the top
//     s->element[s->top]=x;  //insertion of the element at the top
// }

// int pop (stack_type *s) 
// {
//     int x; 
//     x= s->element[s->top];
//     s->top= s->top-1;
//     return (x);
// }

// void display (stack_type *s)
// {
//     int i;
//     if (s->==-1) {
//         printf("\nStack is empty: no element to display ");
//     }
//     else {
//         printf("\nStack contains the following element ");

//         for (i=s->top; i>=0; i--)
//         {
//             printf("%d", s->element[i]);
//         }
//     }
// }