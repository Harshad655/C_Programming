///Write a program which accept number from user and count frequency of User Entered digit in it.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Count = 0, Digit = 0, SearchDigit = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    printf("Enter A Digit Count : ");
    scanf("%d",&SearchDigit);

    while(Num != 0)
    {
        Digit = Num % 10;
        if(Digit == SearchDigit)
        {
            Count++;
        }
        Num /= 10;
    }
    printf("The Digit %d Appears %d Times.\n",SearchDigit,Digit);

    getch();
    return 0;
}
