#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1,Num2;
    up:
    printf("Enter 1st Numbers ");
    scanf("%d%d",&Num1,&Num2);

    if(Num1 == Num2)
    {
        printf("\n Both Numbers Are Equal.Try other Numbers ");
        getch();
        system ("cls");
        goto up;
    }

    if(Num1>Num2)
    {
        printf("The Num1 is Maximum ");
    }
    else
    {
        printf("The Num2 is Maximum ");
    }

    getch();
    return 0;
}
