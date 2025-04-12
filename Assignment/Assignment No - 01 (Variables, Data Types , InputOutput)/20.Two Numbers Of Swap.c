//Write a program that accepts two numbers from the user and swaps their values.

#include<stdio.h>
#include<conio.h>

int main()
{
   int M = 0, N = 0, O = 0;

   printf("Enter First Number: ");
   scanf("%d",&M);

   printf("Enter Second Number: ");
   scanf("%d",&N);

   O = M;
   M = N;
   N = O;

   printf("First Number is: %d \n",M);
   printf("Second Number is: %d \n",N);

   getch();
   return 0;
}
