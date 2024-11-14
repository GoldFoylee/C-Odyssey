#include<stdio.h>
#include<math.h>

void main()
{
    int n, counter= 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    int val= ceil(sqrt(n));
    int val2= n;

    for(int i =2; i<=val;i++)
    {
        if(val2%i == 0)
        {
            counter=1;
        }
    }
    if(counter == 0 && val2 != 1 || val2 == 2)
    {
        printf("No is prime");
    }
    else{
        printf("Not prime");
    }
}
