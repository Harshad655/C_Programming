//Write a program that accepts a month number (1 to 12) and prints the corresponding month name

#include<stdio.h>
#include<conio.h>

int main()
{
    int Month_Num = 0;

    printf("Enter Day Number To Check What Day it is : \n\n\n");
    scanf("%d",&Month_Num);

    if(Month_Num == 1)
    {
        printf("January");
    }
    else if(Month_Num == 2)
    {
        printf("Febuary");
    }
    else if(Month_Num == 3)
    {
        printf("March");
    }
    else if(Month_Num == 4)
    {
        printf("April");
    }
    else if(Month_Num == 5)
    {
        printf("May");
    }
    else if(Month_Num == 6)
    {
        printf("June");
    }
    else if(Month_Num == 7)
    {
        printf("July");
    }
    else if(Month_Num == 8)
    {
        printf("August");
    }
    else if(Month_Num == 9)
    {
        printf("September");
    }
    else if(Month_Num == 10)
    {
        printf("October");
    }
    else if(Month_Num == 11)
    {
        printf("November");
    }
    else if(Month_Num == 12)
    {
        printf("December");
    }
    else
    {
        printf("Invalid Month Number");
    }

    getch();
    return 0;
}
