///Write a program which accept number from user and return difference between summation of even digits and summation of odd digits

#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0, evensum = 0, oddsum = 0, digit = 0;

    printf("Enter A Number : ");
    scanf("%d",&num);

    while(num != 0)
    {
        digit = num % 10;
        if(digit % 2 == 0)
        {
            evensum += digit;
        }
        else
        {
            oddsum += digit;
        }
        num /= 10;
    }
    printf("Difference between sum of even and odd digits : %d\n",evensum - oddsum);

    getch();
    return 0;
}
