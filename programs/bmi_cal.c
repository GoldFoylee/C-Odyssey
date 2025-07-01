#include <stdio.h>

int main() {
    float height, weight, BMI;

   printf ("\t\t\t\t Welcome to the BMI Calculator!\n\n");
   printf("Body mass index (BMI) is a calculation that estimates body fat based on your weight and height\n\n");
   printf("Enter your height in meters:  ");
   scanf("%f", &height);
   printf("Enter your weight in kilograms:  ");
   scanf("%f", &weight);

   BMI= weight / (height*height);

   printf("Your BMI: %.1f \n\n", BMI);

   if (BMI<18.5)
   {
       printf("Underweight\n");
   }
   else if (BMI>18.5 && BMI <24.9)
   {
       printf("Healthy Weight\n");
   }
   else if (BMI>24.9 && BMI<30)
   {
       printf("Overweight\n");
   }
   else
   {
       printf("Obesity\n");
   }

   return 0;

}
