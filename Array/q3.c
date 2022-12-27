#include <stdio.h>
void main()
{
    int a[100], i, n, ele, pos;
    printf("Enter number of elements");
    scanf("%d", &n);
    printf("Enter elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to be inserted");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (a[i] > ele)
        {
            pos = i;
            break;
        }
    }
    for (i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = ele;
    n = n + 1;
    printf("Finalised array is ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}