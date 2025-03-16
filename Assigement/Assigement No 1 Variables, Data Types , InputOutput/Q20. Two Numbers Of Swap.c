#include<stdio.h>
#include<conio.h>

int main()
{
   int m=0, n=0, o=0;

   printf("Enter First Number: ");
   scanf("%d",&m);

   printf("Enter Second Number: ");
   scanf("%d",&n);

   o=m;
   m=n;
   n=o;

   printf("First Number is: %d \n",m);
   printf("Second Number is: %d \n",n);

   getch();
   return 0;
}
