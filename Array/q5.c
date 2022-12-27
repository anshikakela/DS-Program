#include<stdio.h>
void main()
{
    int a[10],i,n,sum1,sum2=0,diff;
    printf("Enter length of array");
    scanf("%d", &n);
    printf("Enter elements");
    for(i=0; i<n; i++) 
    {
        scanf("%d",&a[i]);
    }
    sum1=((n+1)*(n+2))/2;
    for(i=0; i<n; i++)
    {
        sum2= sum2+a[i];
    }
    diff=sum1-sum2;
    printf("Missing number is %d",diff);
}