#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2, result;

    printf("%d\n", a > b);
    printf("%d\n", (a > b && b > c));

    result = a + b;  
    printf("%d\n", result);
    result += c;
    printf("%d\n", result);

    result = (a > b) ? a : b;
    printf("%d\n", result);

    result = a + b * c;
    printf("%d\n", result);

    printf("%d\n", a++);
    printf("%d\n", ++b);

    return 0;
}