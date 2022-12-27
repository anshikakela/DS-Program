#include<stdio.h>
void main()
{
    int a[100],i, n, c=0, ele;
    printf("Enter length of array");
    scanf("%d",&n);
    printf("Elements of array");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    printf("Enter element to be searched ");
    scanf("%d",&ele);
    printf("Position= ");
    for(i=0; i<n; i++){
        if(ele==a[i]){
            c=c+1;
            printf("%d, ",i+1);}}
    if(c>0){
        printf("Element exist %d times ",c);}
    else {
        printf("Element does not exist");}
}