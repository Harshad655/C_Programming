#include<stdio.h>
#include<conio.h>

int main()
{
    int sal = 0, Is_Stud = 0;

    printf("\n Enter Your Salary = ");
    scanf("%d",&sal);

    printf("\n Enter 1 if Your are a student = ");
    scanf("%d",&Is_Stud);

    if(sal<=5000)
    {
        if(Is_Stud == 1)
        {
            printf("\n Candidate are Student");
        }
        else
        {
            printf("\n Candidate are Fresher");
        }
    }
    else
    {
        if(sal>70000)
        {
            printf("\n Candidate is an Expert Employee");
        }
        else
        {
            printf("\n Candidate is an Beginner Employee");
        }
    }
    printf("\n ....EUUUU Program Zala....");
    getch();
    return 0;
}
