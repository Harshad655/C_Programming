#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1,Num2;
    up:
    printf("Enter 1st Number ");
    scanf("%d",&Num1);

    printf("Enter 2nd Number ");
    scanf("%d",&Num2);

    if (Num1 == Num2)
    {
        printf("\n Both Numbers Are Equal ");
        goto up;
    }
    (Num1>Num2)? printf("\n The Num 1 is Maximum "): printf("The Num 2 is Maximum ");

    getch();
    return 0;
}
