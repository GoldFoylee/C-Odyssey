#include<stdio.h>

void main()
{
    int n;

    printf("Enter the year: ");
    scanf ("%d", &n);

    if(n%400 == 0)
    {
        printf("Leap year");
    }
    else if(n%100 == 0)
    {
        printf("Not a leap year");
    }
    else if (n%4 == 0)
    {
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
}
