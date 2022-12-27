#include <stdio.h>
void main()
{
    int a[10], b[10], i, j, m, n;
    printf("Enter length of a");
    scanf("%d", &n);
    printf("Enter length of b");
    scanf("%d", &m);
    printf("Enter elements of a ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of b ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Set difference is ");
    for (i = 0; i < n; i++)
    {
        int c = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                c = c + 1;
                break;
            }
        }
        if (c == 0)
        {
            printf("%d\n", a[i]);
        }
    }
}