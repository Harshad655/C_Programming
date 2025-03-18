#include<stdio.h>
#include<conio.h>

void Add()
{
    int N1 = 0, N2 = 0, Sum = 0;

    printf("Enter Number 1 : ");
    scanf("%d",&N1);
    printf("Enter Number 2 : ");
    scanf("%d",&N2);

    Sum = N1 + N2;

    printf("Addition of %d And %d is %d ",N1,N2,Sum);
    return;
}
void Sub()
{
    int N1 = 0, N2 = 0, Subs = 0;

    printf("Enter Number 1 : ");
    scanf("%d",&N1);
    printf("Enter Number 2 : ");
    scanf("%d",&N2);

    Subs = N1 - N2;

    printf("Subtraction of %d And %d is %d ",N1,N2,Subs);
    return;
}
void Mul()
{
    int N1 = 0, N2 = 0, Mult = 0;

    printf("Enter Number 1 : ");
    scanf("%d",&N1);
    printf("Enter Number 2 : ");
    scanf("%d",&N2);

    Mult = N1 * N2;

    printf("Multiplication of %d And %d is %d ",N1,N2,Mult);
    return;
}
void Div()
{
    int N1 = 0, N2 = 0, Divs = 0;

    printf("Enter Number 1 : ");
    scanf("%d",&N1);
    printf("Enter Number 2 : ");
    scanf("%d",&N2);

    Divs = N1 / N2;

    printf("Division of %d And %d is %d ",N1,N2,Divs);
    return;
}
void Mod()
{
    int N1 = 0, N2 = 0, Mods = 0;

    printf("Enter Number 1 : ");
    scanf("%d",&N1);
    printf("Enter Number 2 : ");
    scanf("%d",&N2);

    Mods = N1 % N2;

    printf("Reminder of %d And %d is %d ",N1,N2,Mods);
    return;
}
int main()
{
    int choice = 0;
    char ch = '\0';

    for(;;)
    {
        printf("welcome");
        printf("\n\t 1.Addition \n\t 2.Subtraction \n\t 3.Multiplication \n\t 4.Division \n\t 5.Reminder \n\t 6.Exit");

        printf("\n\n Enter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            Add();
            getch();
            system("cls");
            break;

        case 2:
            Sub();
            getch();
            system("cls");
            break;

        case 3:
            Mul();
            getch();
            system("cls");
            break;

            case 4:
            Div();
            getch();
            system("cls");
            break;

            case 5:
            Mod();
            getch();
            system("cls");
            break;

            case 6:
                printf("Do You Want To Exit (Yes/No) : ");
                fflush(stdin);
                ch = getchar();

                if(ch == 'Y' || ch == 'Y')
                {
                    goto Down;
                }
                system("cls");
                break;
        }
    }
    Down:
        printf(" !!! Thanks !!!");

        getch();
        return 0;
}
