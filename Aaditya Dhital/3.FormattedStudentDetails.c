#include <stdio.h>
int main() {
    char name[50];
    int age;
    float marks;
    printf("Enter name, age, marks: ");
    scanf("%s %d %f", name, &age, &marks);
    printf("\nStudent Details\n");
    printf("Name  : %s\n", name);
    printf("Age   : %d\n", age);
    printf("Marks : %.2f\n", marks);
    return 0;
}