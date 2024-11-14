#include<stdio.h>

void main()
{
    int n, count =0, number,q, mult=1, result=0, cnt,x;

    printf("Enter the number: ");
    scanf("%d", &n);

    number=n;
    x=n;

    while(n!=0)
    {
        n=n/10;
        count++;
    }
    cnt=count;

    while(number!=0)
    {
        q=number%10;
        while(cnt!=0)
        {
            mult=mult*q;
            cnt--;
        }
        result= result+ mult;
        cnt=count;
        number=number/10;
        mult=1;
    }
    if(x== result)
    {
        printf("No is Armstrong");
    }
    else
        printf("No is not Armstrong");

}
