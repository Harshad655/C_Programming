//Write a program that accepts a number from the user and calculates the cube of that number. (Cube = Number * Number * Number)

#include<stdio.h>
#include<conio.h>

int main()
{
    int N =0;
    printf("Enter Number: ");
    scanf("%d",&N);

    printf("The cube of given number is %d",N*N*N);

    getch();
    return 0;
}
