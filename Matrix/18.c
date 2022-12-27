#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, n, m, p, q;
    printf("Enter r and c of array 1 ");
    scanf("%d%d", &m, &n);
    printf("Enter r and c of array 2 ");
    scanf("%d%d", &p, &q);
    if (n == p){
        printf("Enter elements of array 1 ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);}}
        printf("Enter elements of array 2 ");
        for (i = 0; i < p; i++){
            for (j = 0; j < q; j++)  {
                scanf("%d", &b[i][j]); } }
        for(i=0; i<m; i++){
            for(j=0; j<q; j++) {
                c[i][j]=0;
                for(k=0; k<n; k++){
                    c[i][j]=c[i][j]+ a[i][k]*b[k][j];}} }
        printf("Multiplied matrix is ");
        for(i=0; i<m; i++) {
            for(j=0; j<q; j++){
                printf("%d ",c[i][j]);} }}
}