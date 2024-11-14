#include<stdio.h>

void main()
{
    int n, flag=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n==0 || n==1)
    {
        flag=1;
    }

    for(int i=2;i <=n/2; ++i)
    {
        if (n%i == 0)
        {
            flag=1;
            break;
        }

    }

    if (flag ==1)
    {
        printf("Not a prime no");

    }
    else{
        printf("No is prime");
    }
}
