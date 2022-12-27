#include <stdio.h>
int main()
{
    int a[10], b[10], c[100], i, j, n, m, t, l;
    printf("Enter length of array 1 ");
    scanf("%d", &n);
    printf("Enter length of array 2 ");
    scanf("%d", &m);
    printf("Elements of array 1");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements of array 2");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < m; i++)
    {
        c[i + n] = b[i];
    }
    l = m + n;
    printf("Merged array is ");
    for (i = 0; i < l; i++)
    {
        printf("%d ", c[i]);
    }
    printf("Sorted array is ");
    for (i = 0; i < l - 1; i++)
    {
        for (j = 0; j < l - i - 1; j++)
        {
            if (c[j] > c[j + 1])
            {
                t = c[j];
                c[j] = c[j + 1];
                c[j + 1] = t;
            } 
        }
    }
    for (i = 0; i < l; i++)
    {
        printf("%d ", c[i]);
    }
}
