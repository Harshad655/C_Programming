///Write Program to convert given Binary Number to Decimal

#include<stdio.h>
#include<conio.h>

int main()
{
    long long Binary;
    int Decimal = 0, Mul = 1, R = 0;

    printf("Enter A Binary Number: ");
    scanf("%lld", &Binary);

    while (Binary > 0)
    {
        R = Binary % 10;
        Decimal = Decimal + R * Mul;
        Binary = Binary / 10;
        Mul = Mul * 2;
    }

    printf("%d\n", Decimal);

    getch();
    return 0;
}
