#include <stdio.h>
void main()
{
    int a[10][10], i, j, det;
    printf("Enter elements of array ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    det = (a[0][0] * (a[1][1] * a[2][2]) - (a[1][2] * a[2][1])) - (a[0][1] * (a[1][0] * a[2][2]) - (a[1][2] * a[2][0])) + (a[0][2] * (a[1][0] * a[2][1]) - (a[1][1] * a[2][0]));
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", det);
        }
    }
}