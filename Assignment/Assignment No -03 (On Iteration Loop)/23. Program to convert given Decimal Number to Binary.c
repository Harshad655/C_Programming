///Write Program to convert given Decimal Number to Binary

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num, Binary[32],i = 0,j = 0;

    printf("Enter A Number : ");
    scanf("%d",&Num);

    while(Num > 0)
    {
        Binary[i] = Num % 2;
        Num = Num / 2;
        i++;
    }

    for(j = i - 1; j >= 0; j--)
    {
        printf("%d",Binary[j]);
    }

    printf("\n");

    getch();
    return 0;
}
