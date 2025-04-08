//Write a program that accepts a number from the user and calculates the square of that number. (Square = Number * Number)

#include<stdio.h>
#include<conio.h>

int main()
{
    int N =0;
    printf("Enter No: ");
    scanf("%d",&N);

    printf("The square of given number is %d",N*N);

    getch();
    return 0;
}
