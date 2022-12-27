#include<stdio.h>
void main()
{
    int a[10][10], i, j, w, x;
    int *b, *c;
    printf("Enter row and column ");
    scanf("%d%d",&i,&j);
    b=&a[0][0];
    w=sizeof(a[10][10]);
    x=(int)b+w*(i*10+j);   //pointer add size of datatype
    c=&a[i][j];
    printf("Address of a[%d][%d] by formula is %d\n",i,j,x);
    printf("Address of a[%d][%d] by compiler is %d",i,j,c);
}