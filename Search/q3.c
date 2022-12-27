#include<stdio.h>
void main()
{
    int a[100], i,n,ele,f,l,m1,m2,c=0;
    printf("Enter n ");
    scanf("%d",&n);
    printf("Enter elements ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]); }
    printf("Enter element to be searched");
    scanf("%d", &ele);
    f=0;
    l=n-1;
    while(f<=l){
        m1=f+((l-f)/3);
        m2=m1+((l-f)/3);
        if(ele==a[m1]){
            c=c+1;
            printf("%d",m1);
            break;}
        else if(ele==a[m2]){
            c=c+1;
            printf("%d",m2);}
        else if(ele<m1){
            l=m1-1;
            c=c+1;}
        else if(ele>m1){
            f=m1+1;
            c=c+1;}
        else if(ele>a[m1] && ele<a[m2]){
            f=m1+1;
            l=m2-1;
            c=c+1;} }
    if(c==1){
        printf("Element found");}
    else{
        printf("Element not found");}
}