#include<stdio.h>

void main()
{
    int n, result = 0,x;

    printf("Enter the number: ");
    scanf("%d", &n);

    x=n;

    for(int i= 1; i< n ;i++)
    {
        if(n%i == 0)
        {
            result= result + i;
        }
    }

    if (result==x)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a prefect number");
    }
}
