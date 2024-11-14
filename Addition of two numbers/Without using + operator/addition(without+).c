#include<stdio.h>

int main()
{
    int n1,n2;

    printf("Enter the  no: ");
    scanf("%d", &n1);

    printf("Enter the other no: ");
    scanf("%d", &n2);

if(n2>0)
{
    while(n2!= 0)
    {
         n1++;
         n2--;
    }
}

 else if (n2<0)
 {
     while(n2!=0)
     {
         n1--;
         n2++;
     }
 }

 printf("%d", n1);

 return 0;
}

