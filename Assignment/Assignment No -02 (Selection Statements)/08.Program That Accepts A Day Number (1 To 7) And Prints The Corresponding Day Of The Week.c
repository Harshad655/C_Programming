//Write a program that accepts a day number (1 to 7) and prints the corresponding day of the week

#include<stdio.h>
#include<conio.h>

int main()
{
    int Day_Num = 0;

    printf("Enter day Number to check what day it is :\n\n");
    scanf("%d",&Day_Num);

    if(Day_Num == 1)
    {
        printf("Sunday");
    }
    else if(Day_Num == 2)
    {
        printf("Monday");
    }
    else if(Day_Num == 3)
    {
        printf("Tuesday");
    }
    else if(Day_Num == 4)
    {
        printf("Wednesday");
    }
    else if(Day_Num == 5)
    {
        printf("Thursday");
    }
    else if(Day_Num == 6)
    {
        printf("Friday");
    }
    else if(Day_Num == 7)
    {
        printf("Saturday");
    }
    else
    {
        printf("Invalid Day Number");
    }

    getch();
    return 0;
}
