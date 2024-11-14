#include<stdio.h>

void main()
{
    int num1,num2,remainder;

    printf("Enter the two number");
    scanf("%d%d", &num1,&num2);

    while(num2 !=0)
    {
        remainder= num1%num2;
        num1 = num2;
        num2= remainder;
    }
    printf("HCF: %d", num1);
}
