///Write a program to calculate and print the factorial of a given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int num =0, i = 0;

    printf("Enter a Number :\n");
    scanf("%d",&num);

    int Fact = 1;
    for(i =1;i<=num;i++)
    {
        Fact = Fact * i;
    }
    printf("%d\n",Fact);
    getch();
    return 0;
}
