//Write a program to check if a given number is positive or negative

#include<stdio.h>
#include<conio.h>

int main()
{

    int Num = 0;
    printf("To given number is Positive or Negative");
    scanf("%d",&Num);

    if(Num == 0)
    {
        printf("Given Number is zero");
    }
    else if(Num > 0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Negative");
    }
    getch();
    return 0;
}


