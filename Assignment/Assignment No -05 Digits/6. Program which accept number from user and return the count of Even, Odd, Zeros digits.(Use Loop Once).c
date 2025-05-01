///Write a program which accept number from user and return the count of Even, Odd, Zeros digits.(Use Loop Once)

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Even = 0, Odd = 0, Zero = 0, Digit = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    while(Num != 0)
    {
        Digit = Num % 10;
        if(Digit == 0)
        {
            Zero++;
        }
        else if(Digit % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
        Num /= 10;
    }

    printf("Even Digit : %d, Odd Digits : %d, Zero Digits : %d\n",Even,Odd,Zero);

    getch();
    return 0;
}
