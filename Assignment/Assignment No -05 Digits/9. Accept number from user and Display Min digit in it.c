//Write a program which accept number from user and Display Min digit in it

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, MinDigit, Digit = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    while(Num != 0)
    {
        Digit = Num % 10;
        if(Digit < MinDigit)
        {
            MinDigit = Digit;
        }
        Num /= 10;
    }
    printf("The Minimum Digit Is : %d\n",MinDigit);

    getch();
    return 0;
}
