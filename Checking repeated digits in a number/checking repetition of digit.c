#include <stdio.h>
#define N 10

void main()
{
    int arr[N] ={0};
    int num, rem;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num !=0)
    {
        rem= num%10;
        if (arr[rem] == 1)
        {
            break;
        }
        arr[rem] =1;
        num=num/10;

    }

    if (num ==0 )
    {
        printf("Not repeated");
    }
    else
    {
        printf("Repeated");
    }


}
