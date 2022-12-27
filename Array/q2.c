#include<stdio.h>
void main(){
    int i,n,a[10],pos,ele;
    printf("Enter number of element ");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);}
    printf("Enter element to be entered");
    scanf("%d",&ele);
    printf("Enter position of the element");
    scanf("%d",&pos);
    n=n+1;
    for(i=n-1; i>=pos-1 ;i--) {
        a[i+1]=a[i];}
    a[pos-1]=ele;
    for(i=0; i<n; i++){
        printf("%d\n",a[i]);}
}