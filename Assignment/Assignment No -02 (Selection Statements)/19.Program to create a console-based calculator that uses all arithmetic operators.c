//Write a program to create a console-based calculator that uses all arithmetic operators.(by using switch)

#include<stdio.h>
#include<conio.h>

int main()
{
    char Oprt = '\0';
    int Num1 = 0,Num2 = 0;

    printf("\n Enter  a operator for Mathematical Calculation :\n\n");
    scanf("%c",&Oprt);

    printf("\n Enter First Number : \n");
    scanf("%d",&Num1);

    printf("\n Enter First Number : \n");
    scanf("%d",&Num2);

    switch(Oprt)
    {
        case '+' :

            printf("\n\n Addition of Given Numbers is : %d ",Num1 + Num2);
            break;

        case '-':

            printf("\n\n Substraction of Given Numbers is : %d ",Num1 - Num2);
            break;

        case '*':

            printf("\n\n Multiplication of Given Numbers is : %d ",Num1 * Num2);
            break;

        case '/':

            printf("\n\n Division of Given Numbers is : %d ",Num1 / Num2);
            break;

        case '%':

            printf("\n\n Module Division of Given Numbers is : %d ",Num1 % Num2);
            break;

        default:

            printf("\n\n Invalid Arethmetic Operator");
            break;

    }
    getch();
    return 0;
}
