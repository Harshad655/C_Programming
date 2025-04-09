//Write a program to accept a number from the user and calculate the square root of that number, then display the result. (SquareRoot = sqrt(No))

#include<stdio.h>
#include<conio.h>

int main()
{
    int N = 0, M = 0;
    printf("Enter Number: ");
    scanf("%d",&N);

    M=sqrt(N);

    printf("The Square root of given number is %d",M);

    getch();
    return 0;
}
