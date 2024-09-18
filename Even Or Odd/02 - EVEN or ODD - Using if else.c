#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0;

    printf("\n Enter an Integer Number = ");
    scanf("%d",&Num);

    if(Num == 1)
    {
        printf("\n Given Number is Neutral ");
    }
    else if(Num % 2 == 0)
    {
        printf("\n Given Number is Odd ");
    }
    else
    {
        printf("\n Given Number is Even ");
    }

    getch();
    return 0;
}
