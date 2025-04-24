///Write to program to check whether a given number is prime or not


#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Num = 0;
    int Prime = 1;

    printf("Enter A Number :");
    scanf("%d",&Num);

    if(Num <= 1)
    {
        Prime = 0;
    }

    for(i = 2; i < Num; i++)
    {
        if(Num % i == 0)
        {
            Prime = 0;
            break;
        }
    }

    if(Prime)
    {
        printf("\n\n %d is a Prime Number",Num);
    }
    else
    {
        printf("\n\n %d Is Not Prime Number ",Num);
    }

    getch();
    return 0;
}
