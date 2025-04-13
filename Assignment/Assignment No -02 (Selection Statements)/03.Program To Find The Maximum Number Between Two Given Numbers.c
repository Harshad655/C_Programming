//Write a program to find the maximum number between two given numbers

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0,Num2 = 0;
    printf("Enter 2 Numbers to check which Number is Max :\n\n");
    scanf("%d",&Num1);
    scanf("%d",&Num2);

    if (Num1 > Num2)
    {
        printf("Number 1 is Maximum");
    }
    else if (Num2 > Num1)
    {
        printf("Number 2 is Maximum");
    }
    else
    {
        printf("Given Number is Equal");
    }
    getch();
    return 0;
}
