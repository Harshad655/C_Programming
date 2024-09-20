#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1,Num2;
    up:
    printf("\n Enter 1st Number ");
    scanf("%d",&Num1);
    printf("\n Enter 2nd Number ");
    scanf("%d",&Num2);

    (Num1 == Num2)? printf("Both Numbers are equal "):((Num1>Num2)? printf("\n The Num1 is maximum "):printf("\n The Num2 is maximum "));
    getch();
    return 0;
}
