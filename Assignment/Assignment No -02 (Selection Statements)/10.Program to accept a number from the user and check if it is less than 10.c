//Write a program to accept a number from the user and check if it is less than 10.If it is less than 10, print "Hello"; otherwise, print "World"

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("Enter an Number to check given Number is Smaller Than 10 Or Not :\n\n");
    scanf("%d",&Num);

    if(Num < 10)
    {
        printf("Hello");
    }

    else
    {
        printf("World");
    }
    getch();
    return 0;
}
