#include<stdio.h>
#include<conio.h>

int main()
{
    int Num, Sum = 0, digit = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    while(Num != 0)
    {
        digit = Num % 10;
        Sum += digit;
        Num /= 10;
    }

    printf("Sum Of Digits : %d\n",Sum);

    getch();
    return 0;
}
