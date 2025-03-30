#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stud
{
    int Roll_No;
    char Name [30];
    int Phys;
    int Chem;
    int Bio;
    int Total;
    float Percent;
};

void Accept_Student_Deatils(struct stud *ptr)
{
    printf("\n\nEnter Roll Number : ");
    scanf("%d",&ptr->Roll_No);
    printf("Enter Name : ");
    scanf("%d",&ptr->Name);
    fflush(stdin);

    printf("Enter Marks Of Physics : ");
    scanf("%d",&ptr->Phys);
    printf("Enter Marks Of Chemistry : ");
    scanf("%d",&ptr->Chem);
    printf("Enter Marks Of Biology : ");
    scanf("%d",&ptr->Bio);

    ptr->Total = ptr->Phys + ptr->Chem + ptr->Bio;
    ptr->Percent = ((float)ptr->Total/300)*100;
}

void Display_Student_Deatils(struct stud *ptr)
{
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    printf("\n\nRoll Number : %d\n",ptr->Roll_No);
    printf("Name:%s\n",ptr->Name);
    printf("Marks Of Physics : %d\n",ptr->Phys);
    printf("Marks Of Chemistry : %d\n",ptr->Chem);
    printf("Marks Of Biology : %d\n",ptr->Bio);
    printf("Total Marks : %d\n",ptr->Total);
    printf("Percentage : %.2f%%\n\n",ptr->Percent);
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
}

int main()
{
    int i = 0;
    struct stud std[3]={};;

    for(i=0;i<3;i++)
    {
        Accept_Student_Deatils(&std[i]);
    }

    for(i=0;i<3;i++)
    {
        Display_Student_Deatils(&std[i]);
    }

    getch();
    return 0;
}
