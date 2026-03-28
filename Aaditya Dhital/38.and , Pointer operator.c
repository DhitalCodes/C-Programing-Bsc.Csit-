#include <stdio.h>
int main(){
    int a=5;
    int *p;
    p=&a;
    printf("%d %d",a,*p);
    return 0;
}