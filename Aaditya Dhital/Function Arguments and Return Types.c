#include <stdio.h>

int average(int a, int b) {
    return (a + b) / 2;
}

int main() {
    int result = average(10, 20);
    printf("Average = %d", result);
    return 0;
}