///Write Program to print Fibonacci series from 0 to N, Accept N from user

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, First = 0, Second = 0, Next = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    printf("\n\n Fibonacci Series is => ");


    Second = 1;
    while(First <= Num)
    {
        printf("%d",First);

        Next = First + Second;

        First = Second;
        Second = Next;
    }
    getch();
    return 0;
}
