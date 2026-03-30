#include <stdio.h>
int globalVar = 50;
void show();

int main() {

    show();
    return 0;
}

void show() {
    int localVar = 10; 
    printf("Local = %d\n", localVar);
    printf("Global = %d\n", globalVar);
}