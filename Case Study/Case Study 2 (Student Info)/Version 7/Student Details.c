#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define Num 3

struct Stud
{
    int Roll_No;
    char Name[30];
    int Phys;
    int Chem;
    int Bio;
    int Total;
    float Percent;
};

void Accept_Student_Details(struct Stud *ptr) {
    printf("\n\nEnter Roll Number: ");
    scanf("%d", &ptr->Roll_No);
    printf("Enter Name: ");
    scanf("%s", ptr->Name);
    fflush(stdin);

    printf("Enter Marks of Physics: ");
    scanf("%d", &ptr->Phys);
    printf("Enter Marks of Chemistry: ");
    scanf("%d", &ptr->Chem);
    printf("Enter Marks of Biology: ");
    scanf("%d", &ptr->Bio);

    ptr->Total = ptr->Phys + ptr->Chem + ptr->Bio;
    ptr->Percent = ((float)ptr->Total / 300) * 100;
}

void Display_Student_Details(struct Stud *ptr)
{
    printf("\n**************************************************");
    printf("\n\nRoll Number: %d\n", ptr->Roll_No);
    printf("Name: %s\n", ptr->Name);
    printf("Marks of Physics: %d\n", ptr->Phys);
    printf("Marks of Chemistry: %d\n", ptr->Chem);
    printf("Marks of Biology: %d\n", ptr->Bio);
    printf("Total Marks: %d\n", ptr->Total);
    printf("Percentage: %.2f%%\n\n", ptr->Percent);
    printf("**************************************************\n");
}

int main()
{
    int i = 0;
    struct Stud std[Num] = {};

    for(i=0;i<Num;i++)
    {
        Accept_Student_Details(&std[i]);
    }

    for(i=0;i<Num;i++)
    {
        Display_Student_Details(&std[i]);
    }

    getch();
    return 0;
}
