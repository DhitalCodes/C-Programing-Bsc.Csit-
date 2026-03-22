#include <stdio.h>

int main() {
    int i = 1;
    // while loop
    printf("While loop:\n");
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    // do-while loop
    int j = 1;
    printf("\nDo-while loop:\n");
    do {
        printf("%d ", j);
        j++;
    } while (j <= 5);

    return 0;
}