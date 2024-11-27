#include<stdio.h>

void main()
{
    int n;

    printf("Enter the size of the array ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i< n ; i++)
    {
        printf("Enter the a[%d]= ", i);
        scanf("%d", &a[i]);
    }

    printf("Before reversing: ");

    for (int j = 0 ;j< n ;j++)
    {
        printf("%d ", a[j]);
    }
    printf("\nAfter reversing: ");

    for(int k = n-1  ; k>=0 ; k--)
    {
        printf("%d ", a[k]);
    }
}
