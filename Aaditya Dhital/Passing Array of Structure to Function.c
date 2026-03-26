#include <stdio.h>

struct Student {
    int id;
    float marks;
};

void display(struct Student s[], int n) {
    for(int i = 0; i < n; i++) {
        printf("ID: %d, Marks: %.2f\n", s[i].id, s[i].marks);
    }
}

int main() {
    struct Student s[2] = {
        {1, 80.5},
        {2, 75.0}
    };

    display(s, 2);

    return 0;
}