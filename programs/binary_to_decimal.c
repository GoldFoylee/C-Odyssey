#include<stdio.h>

void main()
{
    int n,rem,result =0 , place = 1;

    printf("Enter the binary number: ");
    scanf("%d", &n);

    while(n!=0)
    {
        rem= n%10;
        result= result + rem*place;
        n = n/10;
        place = place*2;

    }
    printf("Decimal number: %d", result);
}
