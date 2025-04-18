//Write a program to accept division of student from user and depends on the division display exam timing

#include<stdio.h>
#include<conio.h>

int main()
{
    char Dvsn ='\0';

    printf("\n Enter a Division for Exam : \n\n");
    scanf("%d",&Dvsn);

    switch(Dvsn)
    {
        case 'A':
        printf("\n\n Your exam at 10 AM");
        break;

        case 'B':
        printf("\n\n Your exam at 11 AM");
        break;

        case 'C':
        printf("\n\n Your exam at 12 AM");
        break;

        case 'D':
        printf("\n\n Your exam at 2 AM");
        break;

        default:
            printf("\n\n Invalid Division");
            break;
    }

    getch();
    return 0;
}
