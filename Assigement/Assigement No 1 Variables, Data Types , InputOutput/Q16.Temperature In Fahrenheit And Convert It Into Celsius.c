#include<stdio.h>
#include<conio.h>

int main()
{
    float fah =0.0;
    printf("Enter Temperature fahrenheit: ");
    scanf("%f",&fah);

    printf("The Temperature fahrenheit in celsius is %f",(fah-32)*(5.0/9.0));

}
