#include<stdio.h>
#include<conio.h>

int main()

{
    int Num1 = 0,Num2 = 0,Num3 = 0;

    printf("\n Enter The Value Of Num1");
    scanf("%d",&Num1);

    printf("\n Enter The Value Of Num2");
    scanf("%d",&Num2);

    printf("\n Enter The Value Of Num3");
    scanf("%d",&Num3);

    if (Num1 > Num2)
    {
        if(Num1 > Num3)
        {
            printf("\n Max Is %d",Num1);
        }
        else
        {
           printf("\n Max Is %d",Num3);
        }
    }

    else if (Num2 > Num3)
    {
        printf("\n Max Is %d",Num2);
    }

    else
    {
        printf("\n Max Is %d",Num3);
    }

    getch();
    return 0;
}
