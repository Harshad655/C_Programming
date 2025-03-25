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

int main()
{
    int i = 0;
    struct stud std[3]={};

    for(i=0;i<3;i++)
    {
        printf("\n\n Enter Roll Number : ");
        scanf("%d",&std[i].Roll_No);
        printf("Enter Name : ");
        scanf("%s",&std[i].Name);
        fflush(stdin);

        printf("Enter Marks Of Physics  : ");
        scanf("%d",&std[i].Phys);
        printf("Enter Marks of Chemistry : ");
        scanf("%d",&std[i].Chem);
        printf("Enter Marks of Biology : ");
        scanf("%d",&std[i].Bio);

        std[i].Total = std[i].Phys + std[i].Chem + std[i].Bio;
        std[i].Percent = ((float)std[i].Total/300)*100;
    }

    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

    for(i=0;i<3;i++);
    {
        printf("\n\n Roll Number : %d \n",std[i].Roll_No);
        printf("Name : %s \n",std[i].Name);
        printf("Marks Of Physics : %d \n", std[i].Phys);
        printf("Marks of Chemistry : %d \n", std[i].Chem);
        printf("Marks of Biology : %d \n", std[i].Bio);
        printf("Total Marks : %d \n", std[i].Total);
        printf("Percentage : %0.2f \n\n", std[i].Percent);
        printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    }

    getch();
    return 0;
}
