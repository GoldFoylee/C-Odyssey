#include<stdio.h>

void main()
{
    int n, power;
    float result= 1.0 ;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Raised to power? ");
    scanf("%d", &power);

if(power >=0)
{
    for(int i= 1; i<= power; i++)
    {
        result= result*n;
    }
}

else
{
    for(int i=1; i <= -power; i++)
    {
        result =result * (1.0/n);
    }

}
    printf("Result: %f ", result);

}
