#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m,p,q;
    printf("Enter r and c of array 1 ");
    scanf("%d%d",&n,&m);
    printf("Enter elements of array 1 ");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&a[i][j]);}}
    printf("Enter r and c of array 2 ");
    scanf("%d%d",&p,&q);
    printf("Enter elements of array 2 ");
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            scanf("%d",&b[i][j]);}}
    printf("Subtraction of matrix is ");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            c[i][j]= a[i][j]- b[i][j];} }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) {
            printf("%d ",c[i][j]); }}
}