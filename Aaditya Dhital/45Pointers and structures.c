#include <stdio.h>
struct s {
    int x;
};
int main() {
    struct s a;
    struct s *p = &a;
    p->x = 100;
    printf("%d", p->x);
    return 0;
}