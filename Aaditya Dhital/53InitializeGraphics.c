#include <graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    getch();
    closegraph();
    return 0;
}