///Write a program which accept number from user and Display Max digit in it


#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, MaxDigit = -1, Digit = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    while(Num != 0)
    {
        Digit = Num % 10;
        if(Digit > MaxDigit)
        {
            MaxDigit = Digit;
        }
        Num /= 10;
    }
    printf("The Maximum Digit Is : %d\n",MaxDigit);

    getch();
    return 0;
}
