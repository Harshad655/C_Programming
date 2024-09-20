#include<stdio.h>Enter
#include<conio.h>

int main()

{
    int Num =0;

    printf("/n Enter An Integer Number To Check Whether It Is Even Or Odd ");
    up:
    scanf("%d",&Num);

    if(Num == 0)
    {
        printf("/n Given Number is Neutral.\n\n Please Enter other then zero Integer To Check Whether It Even Or Odd= ");
        goto up;
    }
    (Num % 2 == 0)? printf("\n Given Number Is Even.") : printf("\n Given Number Are Odd.");

    getch();
    return 0;
}
