
//Accept character from user and display its ASCII value in decimal,octal and hexadecimal format.


#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '/0';

    printf("Enter A Character : \n");
    scanf("%c",&Ch);

    printf("Decimal: %d\n", Ch);
    printf("Octal: %o\n", Ch);
    printf("Hexadecimal: %x\n", Ch);

    getch();
    return 0;
}
