//Write a program that accepts the side length of a square from the user and calculates its area. (Area of Square = Side * Side)

#include<stdio.h>
#include<conio.h>

int main()
{
    float length = 0.0;
    printf("Enter Side Length Of Square: ");
    scanf("%f",&length);

    printf("Area of Square is %f",length*length);

    getch();
    return 0;
}
