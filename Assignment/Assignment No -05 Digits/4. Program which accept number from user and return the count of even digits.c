///Write a program which accept number from user and return the count of even digits

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
        if(Digit % 2 == 0)
        {
            Count++;
        }
        Num /= 10;
    }

    printf("Number Of Even Didits: %d\n",Count);

    getch();
    return 0;
}
