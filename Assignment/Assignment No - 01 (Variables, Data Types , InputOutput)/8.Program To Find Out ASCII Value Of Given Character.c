//Write Program to find out ASCII value of given character

#include <stdio.h>
#include <conio.h>

int main() {

    char ch;

    printf("Enter a char: ");

    scanf("%c", &ch);

    printf("ASCII value of '%c' is: %d\n", ch, ch);

    getch();
    return 0;
}

