//Write a program to accept a number from the user and check whether it is divisible by 5 and 7 or not

#include<stdio.h>
#include<conio.h>

int main()
{
    int A = 0;

    printf("Enter 1 Number to check the Number is Divisible by 7 \n\n");
    scanf("%d",&A);

    if (A % 5 == 0 && A % 7 == 0)
    {
        printf("%d is Divisible by 7",A);
    }

    else if (A % 5 == 0)
    {
        printf("%d is not Divisible by 5",A);
    }

    else if (A % 7 == 0)
    {
        printf("%d is not Divisible by 5 and 7",A);
    }

    else
    {
        printf("%d is Not Divisible by 5 Neither 7",A);
    }
    getch();
    return 0;
}
