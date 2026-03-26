#include <stdio.h>

struct Student {
    int id;
    float marks;
};

void display(struct Student s) {
    printf("ID: %d\n", s.id);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1 = {1, 90.5};

    display(s1);

    return 0;
}