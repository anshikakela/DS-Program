#include<stdio.h>
void main()
{
    int a[10][10][10], i, j, k, w, x;
    int *b, *c;
    printf("Enter row, column and depth ");
    scanf("%d%d%d",&i,&j,&k);
    b=&a[0][0][0];
    w=sizeof(int);
    x=(int)(b)+w*(i*10*10+j*10+k);   //pointer add size of datatype
    c=&a[i][j][k];
    printf("Address of a[%d][%d][%d] by formula is %d\n",i,j,k,x);
    printf("Address of a[%d][%d][%d] by compiler is %d",i,j,k,c);
}