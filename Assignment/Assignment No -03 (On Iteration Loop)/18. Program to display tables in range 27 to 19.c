///Write Program to display tables in range 27 to 19

#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 0, Clo = 0;

    printf("The Table in Range 27 To 19 Is :\n\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

    for(Row = 1; Row <= 10; Row++)
    {
        for(Clo = 27; Clo >= 19; Clo--)
        {
            Row * Clo;
            printf("%4d",Row * Clo);
        }
        printf("\n");
    }

    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

    getch();
    return 0;
}


