#include<stdio.h>
void main(){
    int a[10],b[10],c[100],i,j,n,m,k=0;
    printf("Enter length of a");
    scanf("%d",&n);
    printf("Enter length of b");
    scanf("%d",&m);
    printf("Enter elements of a");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);}
    printf("Enter elements of b");
    for(i=0; i<m; i++){
        scanf("%d",&b[i]);}
    for(i=0; i<n; i++){
        for(j=0; j<k; j++){
            if(c[j]==a[i]){
                break;}}
        if(j==k){
            c[k]=a[i];
            k++;}}
    for(i=0; i<m; i++) {
        for(j=0; j<k; j++){
            if(c[j]==b[i]){
                break;}}
        if(j==k){
            c[k]=b[i];
            k++;}}
    printf("Union of array is ");
    for(i=0; i<k; i++)
  printf("%d\n",c[i]);
   }