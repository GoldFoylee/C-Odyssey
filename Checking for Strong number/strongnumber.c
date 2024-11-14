#include<stdio.h>

void main()
{
    int n,rem,fact=1, result=0,x;

    printf("Enter the number: ");
    scanf("%d", &n);

    x=n;

    while(n!=0)
    {
        rem=n%10;
        for(int i=1; i<=rem;i++)
        {
            fact=fact*i;
        }
        result= result + fact;
        fact=1;
        n=n/10;
    }

    if(x==result)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a strong number");
    }


}
