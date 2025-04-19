///Write a program to accept a number from the user and print that number of * on screen

#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0,i = 0;

    printf("Enter a Number : ");
    scanf("%d",&num);

    for(i = 1; i<= num;i++)
    {
        printf("*");
    }

    getch();
    return 0;
}
