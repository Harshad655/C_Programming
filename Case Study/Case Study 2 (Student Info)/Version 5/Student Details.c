#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct stud
{
    int Roll_No;
    char Name[30];
    int Phys;
    int Chem;
    int Bio;
    int Total;
    float Percent;
};

void Accept_Student_Deatils(struct stud *ptr)
{
    printf("\n\n Enter Roll Number : ");
    scanf("%d",&ptr->Roll_No);
    printf("Enter Name : ");
    scanf("%s",ptr->Name);
    fflush(stdin);

    printf("Enter Marks of Physics: ");
    scanf("%d", &ptr->Phys);
    printf("Enter Marks of Chemistry: ");
    scanf("%d", &ptr->Chem);
    printf("Enter Marks of Biology: ");
    scanf("%d", &ptr->Bio);

    ptr->Total = ptr->Phys + ptr->Chem + ptr->Bio;
    ptr->Percent = ((float)ptr->Total/300)*100;
}

void Display_Student_Deatils(struct stud *ptr)
{
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    printf("\n\n Roll Number : %d\n",ptr->Roll_No);
    printf("Marks Of Physics : %d\n",ptr->Phys);
    printf("Marks Of Chemistry : %d\n",ptr->Chem);
    printf("Marks Of Biology : %d\n",ptr->Bio);
    printf("Total Marks :%d\n",ptr->Total);
    printf("Percentage : %.2f%%\n\n",ptr->Percent);
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
}

int main()
{
    struct stud std;

    Accept_Student_Deatils(&std);
    Display_Student_Deatils(&std);

    getch();
    return 0;
}
