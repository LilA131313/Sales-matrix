#include <iostream>

void main()
{
    int a[101][101], m, n, i, j, S = 0;

    scanf_s("%d", &n);
    scanf_s("%d", &m);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf_s("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            S = S + a[i][j];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%5d ", a[i][j]);
        printf("\n");
    }

    printf("\n");
    printf("The total sales sum is %d", S);

    printf("\n");
    printf("The average sales sum is %5.2f", (float)S/(n * m));
}
