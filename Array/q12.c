/*#include<stdio.h>
void main()
{ 
    int a[10], b[10],i ,j ,m ,n , k=0, c[10];
    printf("Enter length of a");
    scanf("%d",&n);
    printf("Enter length of b");
    scanf("%d",&m);
    printf("Enter elements of a ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements of b ");
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Set difference is between A and B is ");
    for(i=0; i<n; i++)
    {
        int t=0;
        for(j=0; j<m; j++)
        {
            if(a[i]==b[j])
            {
                t=t+1;
                break;
            }
        }
        if(t==0)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("\nSet difference is between B and A is ");
    for(i=0; i<m; i++)
    {
        int t=0;
        for(j=0; j<n; j++)
        {
            if(b[i]==a[j])
            {
                t=t+1;
                break;
            }
        }
        if(t==0)
        {
            printf("%d\n",b[i]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<k; j++)
        {
            if(c[j]==a[i])
            {
                break;
            }
        }
        if(j==k)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<k; j++)
        {
            if(c[j]==b[i])
            {
                break;
            }
        }
        if(j==k)
        {
            c[k]=b[i];
            k++;
        }
    }
    printf("Union of array is ");
    for(i=0; i<k; i++)
    {
        printf("%d\n",c[i]);
    }
}*/


#include<stdio.h>
void main(){
    int a[10],b[10],c[10],i,j,m,n,k=0;
    printf("Enter number of element in set a ");
    scanf("%d",&m);
    printf("Enter elements of set a \n");
    for(i=0 ;i<m;i++){
        scanf("%d",&a[i]);}
    printf("Enter number of element in set b ");
    scanf("%d",&n);
    printf("Enter elements of set b \n");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);}
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            if (a[i]==b[j])
            break;}
        if (j==n){
            c[k]=a[i];
            k++;} }
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            if (b[i]==a[j])
            break;}
        if (j==n){
            c[k]=b[i];
            k++;}}
    printf("Symmetric Difference is ");
    for ( i = 0; i < k; i++){
        printf("%d\n", c[i]);}
}