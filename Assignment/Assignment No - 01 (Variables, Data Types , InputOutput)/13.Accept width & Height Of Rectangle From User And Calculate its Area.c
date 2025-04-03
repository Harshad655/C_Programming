//Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)

#include<stdio.h>
#include<conio.h>

int main()
{
    float Width=0.0;
    float Height=0.0;

    printf("Enter Width is Rectangle: ");
    scanf("%f",&Width);

    printf("Enter Height is Rectangle: ");
    scanf("%f",&Height);

    printf("Area of Rectangle is %f",Width*Height);

    getch();
    return 0;
}
