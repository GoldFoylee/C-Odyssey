#include<stdio.h>

void main()
{
    int n1,n2, sum, carry;

    printf("Enter the two numbers: ");
    scanf("%d %d", &n1, &n2);

    while (n2 != 0)
    {
       sum = n1^n2;
       carry = (n1&n2)<<1;
       n1 = sum;
       n2 = carry;
    }

    printf("Addition of two numbers: %d", sum);
}
