#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0;

    printf("\n Enter An Integer Number ");
    scanf("%d",&Num);

    (Num == 0)? printf("/n The Given Number Is Neutral "): (Num > 0)? printf("\n The Given Number Is Positive "):printf("\n The Give Number Is Negative ");

    getch();
    return 0;
}
