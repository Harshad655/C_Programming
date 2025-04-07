//Write a program which accept temperature in Fahrenheit and convert it into Celsius.
(1 Celsius = (Fahrenheit -32) * (5/9))

#include<stdio.h>
#include<conio.h>

int main()
{
    float Fah =0.0;
    printf("Enter Temperature Fahrenheit: ");
    scanf("%f",&Fah);

    printf("The Temperature Fahrenheit in Celsius is %f",(Fah-32)*(5.0/9.0));

}
