#include<stdio.h>

void main()
{
    int n,x,r,reverse=0 ;
    printf("Enter the number: ");
    scanf("%d", &n);

    x = n;

    while(n!=0)
    {
        r=n%10;
        reverse = reverse*10 + r;
        n=n/10;
    }

    if (reverse == x)
    {
        printf("%d is palindrome", x);
    }
    else
        printf("%d is not palindrome", x);

}
