#include<stdio.h>

int fact(int num);

void main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Factorial: %d",fact(num));

}

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num-1);
    }

}
