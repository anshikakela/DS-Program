#include <stdio.h>
void main()
{
    int i, j, min, a[10], n, b;
    printf("Enter number of elements ");
    scanf("%d", &n);
    printf("Enter elements ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int pos = 0;
    for (i = 0; i < n - 1; i++)
    {
        min = a[i];
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                pos = j;
            }
        }
        b = a[i];
        a[i] = a[pos];
        a[pos] = b;
    }
    printf("Sorted array is ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}