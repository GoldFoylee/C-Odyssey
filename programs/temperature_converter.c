#include<stdio.h>

int main()
{
    int select,select2;
    float c,f,k;

    printf("\t\t\t\t\t Welcome to temperature coversion!\n\n");
    printf("Temperature conversion formulas refer to changing the value of temperature from one unit to another\n\n");

    printf("There are three main types of temperature conversions:\n");
    printf("1. Conversion Between Celsius and Kelvin\n");
    printf("2. Conversion Between Fahrenheit and Kelvin\n");
    printf("3. Conversion Between Celsius and Fahrenheit\n\n");
    printf("Choose the conversion type (Enter 1, 2, or 3): ");
    scanf("%d", &select);

    if(select == 1)
    {
    printf("1. Convert Celsius to Kelvin\n");
    printf("2. Convert Kelvin to Celsius\n");
    printf("Choose (Enter 1 or 2): ");
    scanf("%d", &select2);

      if (select2 == 1)
        {
         printf("Enter temperature in Celsius: ");
         scanf("%f", &c);
         k =c + 273.15;
         printf("Temperature in Kelvin: %.1f\n", k);
        }

        else{
            printf("Enter temperature in kelvin: ");
            scanf("%f", &k);
            c = k - 273.15 ;
            printf("Temperature in Celsius: %.1f\n", c);
        }
}

    else if(select ==2)
    {
        printf("1. Convert Fahrenheit to Celsius\n");
        printf("2. Convert  Celsius to Fahrenheit\n");
        printf("Choose (Enter 1 or 2): ");
        scanf("%d", &select2);

        if (select2 == 1)
        {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &f);
            c = (f - 32) * (5.0/9.0);
            printf("Temperature in Celsius: %.1f\n", c);
        }

        else{
            printf("Enter temperature in Celsius: ");
            scanf("%f", &c);
            f = c*(9.0/5.0) + 32;
            printf("Temperature in Fahrenheit:%.1f\n", f);
         }
    }

    else
    {
        printf("1. Convert Fahrenheit to Kelvin\n");
        printf("2. Convert  Kelvin to Fahrenheit\n");
        printf("Choose (Enter 1 or 2): ");
        scanf("%d", &select2);

        if(select2 == 1)
        {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &f);
            k = ((f - 32)* (5.0/9.0)) + 273.15;
            printf("Temperature in kelvin: %f\n",k);
        }

        else{
            printf("Enter temperature in kelvin: ");
            scanf("%f", &k);
            f = ((k - 273.15) * (9.0/5.0)) + 32;
            printf("Temperature in Fahrenheit: %f\n", f);

        }
    }

    return 0;
}
