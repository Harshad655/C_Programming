#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct stud
{
    int Roll_No;
    int Name [30];
    int phys;
    int chem;
    int Bio;
    int Total;
    float Percent;
};

int main()
{
    struct stud std;

    printf("Enter Roll Number : ");
    scanf("%d",&std.Roll_No);
    printf("Enter Name : ");
    scanf("%d",&std.Name);
    fflush(stdin);

    printf("Enter Marks Of Physics : ");
    scanf("%d",&std.phys);
    printf("Enter Marks Of Chemistry : ");
    scanf("%d",&std.chem);
    printf("Enter Marks Of Biology : ");
    scanf("%d",&std.Bio);

    std.Total = std.phys + std.chem + std.Bio;
    std.Percent = ((float)std.Total/300)*100;

    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    printf("\n\nRoll Number : %d \n",std.Roll_No);
    printf("Name : %s \n",std.Name);
    printf("Mark Of Physics : %d \n",std.phys);
    printf("Marks Of Chemistry : %d \n",std.chem);
    printf("Marks Of Biology : %d \n",std.Bio);
    printf("Total Marks : %d \n",std.Total);
    printf("Percentage : %0.2f \n\n",std.Percent);
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

    getch();
    return 0;
}
