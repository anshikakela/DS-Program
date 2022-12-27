#include <stdio.h>
void main()
{
    int a[10], b[10], i, j, m, n;
    printf("Enter length of a");
    scanf("%d", &n);
    printf("Enter length of b");
    scanf("%d", &m);
    printf("Enter elements of a ");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]); }
    printf("Enter elements of b ");
    for (i = 0; i < m; i++){
        scanf("%d", &b[i]); }
    for (i = 0; i < m; i++){
        a[n + i] = b[i];}
    printf("Intersection of sets ");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (a[i] == b[j]) {
                printf("%d\n", a[i]); }}}
}