#include<stdio.h>
#include<conio.h>

int main()

{
    int Num =0;

    printf("\n Enter An Integer Number =");
    scanf("%d",&Num);

    (Num == 0)? printf("\n Given Number Is Neutral."):((Num % 2 == 0)? printf("\n Given Number Is Even"):printf("\n Given Number Odd."));

    getch();
    return 0;
}
