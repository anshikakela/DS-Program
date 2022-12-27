#include<stdio.h>
int main()
{
     int i,n,t,a[100],p,s;
     printf("Enter the number of elements");
     scanf("%d",&n);
     printf("Enter elements ");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(p=0;p<n-1;p++){
         for(s=0;s<n-p-1;s++){
             if(a[s]>a[s+1]){
                 t=a[s];
                 a[s]=a[s+1];
                 a[s+1]=t;}}}
     printf("Sorted elements are ");
     for(i=0;i<n;i++)
     {
         printf("%d\n",a[i]);
     }
}