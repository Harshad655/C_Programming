//Write a program to accept a day number (1 to 7) and prints the corresponding day of the week (by using switch)

#include<stdio.h>
#include<conio.h>


int main()
{
    int Day_Num = 0;

    printf("Enter day number to check what day it is :\n\n");
    scanf("%d",&Day_Num);

    switch(Day_Num)
    {
    case 1:
        printf("Sunday");
        break;

    case 2:
        printf("Monday");
        break;

    case 3:
        printf("Tuesday");
        break;

    case 4:
        printf("Wednesday");
        break;

    case 5:
        printf("Thursday");
        break;

    case 6:
        printf("Friday");
        break;

    case 7:
        printf("Saturday");
        break;

    default:
        printf("Invalid Day Number");
        break;
    }

    getch();
    return 0;

}
