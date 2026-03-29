#include <stdio.h>
int* fun(int *p) {
    return p;
}
int main() {
    int a = 5;
    int *p = fun(&a);
    printf("%d", *p);
    return 0;
}