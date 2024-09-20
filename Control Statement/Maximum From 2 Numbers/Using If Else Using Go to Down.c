#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1,Num2;
    printf("\n Enter Numbers ");
    scanf("%d%d",&Num1,&Num2);

    if(Num1 == Num2)

    {
        printf("\n Both Numbers Are Equal");
        goto Down;
    }

    else if (Num1>Num2)
    {
        printf("\n The Num1 is Maximum ");
    }

    else
    {
        printf("\n The Num2 is Maximum ");
    }
    Down :

    getch();
    return 0;
}
