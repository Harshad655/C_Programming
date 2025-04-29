///Write a program which accept number from user and return multiplication of all digits

#include<conio.h>
#include<stdio.h>

int main()
{
    int Num, Mul = 1, Digit = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    while(Num != 0)
    {
        Digit = Num % 10;
        Mul *= Digit;
        Num /= 10;
    }

    printf("Sum Of Digits : %d\n",Mul);

    getch();
    return 0;
}
