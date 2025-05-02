///Write a program which accept number from user and check whether it contains 2 in it or not

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Found = 0, Digit = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    while(Num != 0)
    {
        Digit = Num % 10;
        if(Digit == 2)
        {
            Found = 1;
            break;
        }
        Num /= 10;
    }
    if(Found)
    {
        printf("The Number Contains 2.\n");
    }
    else
    {
        printf("The Number Does Not Contain 2.\n");
    }
    getch();
    return 0;
}
