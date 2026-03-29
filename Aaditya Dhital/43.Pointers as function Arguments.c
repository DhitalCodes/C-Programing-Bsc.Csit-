#include <stdio.h>
void change(int *p) {
    *p = 50;
}
int main() {
    int a = 10;
    change(&a);
    printf("%d", a);
    return 0;
}