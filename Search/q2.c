#include<stdio.h>
void main()
{
    int a[100],i,n,ele,f,l,mid,c=0;
    printf("Enter n ");
    scanf("%d",&n);
    printf("Enter elements ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);}
    printf("Enter element to be searched ");
    scanf("%d",&ele);
    f=0;
    l=n-1;
    while(f<=l) {
        mid=(f+l)/2;
        if(ele==a[mid]){
            c=c+1;
            break; }
        else if(ele<a[mid]) {
            l=mid-1;}
        else if(ele>a[mid]){
            f=mid+1;}}
    if(c==1){
        printf("Element found ");}
    else{
        printf("Element not found");}
}