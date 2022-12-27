#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], i, j, n, m;
    printf("Enter r and c of array ");
    scanf("%d%d", &n, &m);
    printf("Enter elements of array ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Transposed matrix is ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", b[i][j]);
        }
    }
}