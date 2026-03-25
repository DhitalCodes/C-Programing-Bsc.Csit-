#include <stdio.h>

void printString(char str[]);

int main() {
    char name[] = "C Programming";

    printString(name);

    return 0;
}

void printString(char str[]) {
    printf("String: %s", str);
}