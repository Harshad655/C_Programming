#include<stdio.h>
#include<conio.h>

#include"Function.h"

int main()
{
    int choice = 0;
    char ch = '\0';


    for(;;)
    {
        printf("Welcome");
        printf("\n\n 1. Addition \n\t 2. Subtraction \n\t 3. Multiplication \n\t 4. Division \n\t 5. Reminder \n\t 6. Exit");

        printf("\n\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 :
                Add();
                getch();
                system("cls");
                break;

            case 2 :
                Sub();
                getch();
                system("cls");
                break;

            case 3 :
                Mul();
                getch();
                system("cls");
                break;

            case 4 :
                Div();
                getch();
                system("cls");
                break;

            case 5 :
                Mod();
                getch();
                system("cls");
                break;

            case 6 :

                printf("Do You Want to Exit(Yes/No) : ");
                fflush(stdin);
                ch = getchar();

                if(ch == 'Y' || ch == 'y')
                {
                    goto Down;
                }
                system("cls");
                break;
        }
    }

    Down:
        printf(" Thank You!!");

    getch();
    return 0;
}


