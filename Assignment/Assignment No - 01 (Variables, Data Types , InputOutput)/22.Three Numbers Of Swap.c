//Write a program that accepts three numbers from the user and swaps their values such that the value of the first number goes to the second, the second goes to the third, and the third goes to the first

#include<stdio.h>
#include<conio.h>

int main()
{
    int M = 0, N = 0, O = 0, P = 0;

    printf("Enter First Number: ");
    scanf("%d",&M);

    printf("Enter Second Number: ");
    scanf("%d",&N);

    printf("Enter Third Number: ");
    scanf("%d",&O);

    P = M;
    M = N;
    N = O;
    O = P;

    printf("First Number is: %d \n",M);
    printf("Second Number is: %d \n",N);
    printf("Third Number is: %d \n",O);

    getch();
    return 0;
}
