#include <stdio.h>

struct student {
    int id;
    char name[20];
};

int main() {
    struct student s1 = {1, "Ram"};
    struct student *ptr;

    ptr = &s1;

    printf("ID: %d\n", ptr->id);
    printf("Name: %s", ptr->name);

    return 0;
}