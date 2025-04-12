//Write a program to check if a given number is even or odd

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;
    printf("Enter An Number to check given number is Even or Odd :\n\n");
    scanf("%d",&Num);

    if(Num == 0)
    {
        printf("Given Num is Zero");
    }
    else if(Num %2 == 0)
    {
        printf("Given no is Even");
    }
    else
    {
        printf("Given no is Odd");
    }
    getch();
    return 0;
}
