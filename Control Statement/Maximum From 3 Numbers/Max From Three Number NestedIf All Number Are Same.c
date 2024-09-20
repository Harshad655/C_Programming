#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1 = 0, Num2 = 0, Num3 = 0;

    printf("\n Enter The Value Of Num1");
    scanf("%d",&Num1);

    printf("\n Enter The Value Of Num2");
    scanf("%d",&Num2);

    printf("\n Enter The Value Of Num3");
    scanf("%d",&Num3);

    if(Num1 > Num2)
    {
        if(Num1 > Num3)
        {
            printf("\n Max is =%d",Num1);
        }
        else
        {
            printf("/n Max is =%d",Num2);
        }
    }
    else if (Num1 > Num3)
    {
       printf("\n Max is =%d",Num1);
    }

    else
    {
        printf("\n Max is =%d",Num3);
    }

    getch();

    return 0;
}
