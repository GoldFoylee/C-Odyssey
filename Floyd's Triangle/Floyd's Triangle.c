#include<stdio.h>

void main()
{
    int n, x= 1;

    printf("Enter the numbers of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j= 1; j <= i; j++)
        {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }
}
