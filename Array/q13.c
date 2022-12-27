#include<stdio.h>
void main()
{
    int a[10], i, w, x;
    int *b, *c;
    printf("Enter rows ");
    scanf("%d",&i);
    b=&a[0];
    w=sizeof(a[10]);
    x=(int)b+w*((i));   //pointer add size of datatype
    c=&a[i];
    printf("Address of a[%d] by formula is %d\n",i,x);
    printf("Address of a[%d] by compiler is %d",i,c);
}