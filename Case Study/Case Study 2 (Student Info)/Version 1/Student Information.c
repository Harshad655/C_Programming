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
    struct stud std;
    strcpy(std.Name,"Rohit");
    std.Phys = 7;
    std.Bio = 13;
    std.Chem = 11;
    std.Total = std.Phys + std.Chem + std.Bio;
    std.Percent = ((float)std.Total/300)*100;

    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    printf("\n\nRoll Number : %d \n",std.Roll_No);
    printf("Name : %s \n", std.Name);
    printf("Marks Of Physics : %d \n",std.Phys);
    printf("Marks Of Chemistry : %d \n",std.Chem);
    printf("Marks Of Biology : %d \n",std.Bio);
    printf("Total Marks : %d \n",std.Total);
    printf("Percentage : %0.2f \n\n",std.Percent);
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

    getch();
    return 0;
}
