///Write a program which accept number from user and count frequency of 2 in it

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Count = 0, Digit = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    while(Num != 0)
    {
        Digit = Num % 10;
        if(Digit == 2)
        {
            Count++;
        }
        Num /= 10;
    }

    printf("Frequency Of Digit 2 :%d\n",Count);

    getch();
    return 0;
}
