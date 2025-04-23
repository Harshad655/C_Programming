///Write Program to display tables in range 7 to 13

#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 0, Clo = 0;

    printf("The Table in Range 7 To 13 Is :\n\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

    for(Row = 1; Row <=10; Row++)
    {
        for(Clo = 7; Clo <= 13; Clo++)
        {
            Row * Clo;
            printf("%4d",Clo * Row);
        }
        printf("\n");
    }

    printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

    getch();
    return 0;
}

