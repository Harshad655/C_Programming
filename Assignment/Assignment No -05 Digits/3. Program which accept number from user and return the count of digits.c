///Write a program which accept number from user and return multiplication of all digits

#include<stdio.h>
#include<conio.h>


int main()
{
    int Num = 0, Count = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    while(Num != 0)
    {
        Num /= 10;
        Count++;
    }
    printf("Number Of Digits : %d\n", Count);

    getch();
    return 0;
}
