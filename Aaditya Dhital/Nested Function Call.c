#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int result = square(square(2)); 
    printf("Result = %d", result);
    return 0;
}