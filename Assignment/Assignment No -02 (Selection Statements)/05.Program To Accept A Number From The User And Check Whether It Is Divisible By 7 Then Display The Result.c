//Write a program to accept a number from the user and check whether it is divisible by 7, then display the result

#include<stdio.h>
#include<conio.h>

int main ()
{
    int A = 0;
    printf("Enter 1 Number to check the Number is Divisible by 7");
    scanf("%d",&A);

    if (A % 7 == 0)
    {
        printf("%d is Divisible by 7",A);
    }

    else
    {
        printf("%d is not Divisible by 7",A);
    }

    getch();
    return 0;
}
