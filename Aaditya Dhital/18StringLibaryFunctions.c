#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = "World";
    char str3[50];
    printf("Length of str1 = %lu\n", strlen(str1));

    strcpy(str3, str1);
    printf("Copied string = %s\n", str3);

    strcat(str1, str2);
    printf("After concatenation = %s\n", str1);
    if (strcmp(str2, str3) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}