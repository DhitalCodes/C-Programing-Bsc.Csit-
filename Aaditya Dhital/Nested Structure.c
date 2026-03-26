#include <stdio.h>

struct Address {
    char city[50];
    int zip;
};

struct Student {
    int id;
    char name[50];
    struct Address addr;
};

int main() {
    struct Student s1 = {1, "Ram", {"Kathmandu", 44600}};

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("City: %s\n", s1.addr.city);
    printf("ZIP: %d\n", s1.addr.zip);

    return 0;
}