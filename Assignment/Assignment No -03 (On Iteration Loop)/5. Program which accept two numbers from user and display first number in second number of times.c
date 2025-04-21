///Write a program which accept two numbers from user and display first number in second number of times

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, i = 0, Cnt = 0;

    printf("Enter A Number :\n");
    scanf("%d",&Num);

    printf("Enter A Count :\n");
    scanf("%d",&Cnt);

    for(i = 1; i <= Cnt; i++)
    {
        printf("\n %d",Num);
    }

    getch();
    return 0;
}
