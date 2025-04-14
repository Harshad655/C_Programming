//Write a program that accepts a number from the user and checks if it is even or odd using the ternary operator

#include<stdio.h>
#include<conio.h>

int main()
{
    int Rohit_Runs = 0;

    printf("Enter Rohit Runs to check the Runs are Even or Odd \n\n");
    scanf("%d",&Rohit_Runs);

    (Rohit_Runs%2 == 0)? printf("%d is Even",Rohit_Runs):printf("%d is Odd",Rohit_Runs);

    getch();
    return 0;
}
