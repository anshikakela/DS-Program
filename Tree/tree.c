#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

createnode (int value)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->left = NULL;
    p->right = NULL;
    return p;
}

preorder (struct node *p)
{
    if (p != NULL)
    {
        printf(" %d ",p->data);
        preorder (p -> left);
        preorder (p -> right);
    }
}

postorder (struct node *p)
{
    if (p != NULL)
    {
        postorder (p -> left);
        postorder (p -> right);
        printf(" %d ",p->data);
    }
}

inorder (struct node *p)
{
    if (p != NULL)
    {
        inorder (p -> left);
        printf(" %d ",p->data);
        inorder (p -> right);
    }
}

void main()
{
    struct node *n1= createnode(2); 
    struct node *n2= createnode(4); 
    struct node *n3= createnode(5); 
    struct node *n4= createnode(6); 
    n1->left = n2;
    n1->right = n3;
    n3->left = n4;
    printf("\nPreorder traversal \n");
    preorder(n1);
    printf("\nPostorder traversal \n");
    postorder(n1);
    printf("\nInorder traversal \n");
    inorder(n1);
    
}