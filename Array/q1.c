#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("Enter length of array ");
    scanf("%d",&n);
    printf("Elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        printf("%d",a[i]);}
    return 0;
}