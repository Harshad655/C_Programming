
//Write a program to check whether a given year is a leap year.

#include<stdio.h>
#include<conio.h>

int main()
{
    int YR = 0;

    printf("Enter a Year To Check It is Leap or Not : ");
    scanf("%d",&YR);

    if (((YR % 4 == 0) && (YR % 100 != 0)) || (YR % 400 == 0))
    {
        printf("\n\n The Given Year %d Is Leap Year",YR);
    }
    else
    {
        printf("\n\nThe Given Year %d Is Not Leap Year",YR);
    }

    getch();
    return 0;
}
