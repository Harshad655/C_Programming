///Write a program which accept number from user and display its multiplication of factors


#include<stdio.h>
#include<stdio.h>

int main()
{
    int Num = 0, i = 0,Mul = 1;

    printf("Enter The Number : ");
    scanf("%d",&Num);

    for (i = 1; i <= Num; i++)
    {
        if (Num % i == 0)
        {
            Mul *= i;
        }
    }

    printf("%d",Mul);
    getch();
    return 0;
}
