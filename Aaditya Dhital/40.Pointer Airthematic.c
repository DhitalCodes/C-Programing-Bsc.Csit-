#include <stdio.h>
int main() {
    int arr[3] = {1,2,3};
    int *p = arr;
    p++;
    printf("%d", *p);
    return 0;
}