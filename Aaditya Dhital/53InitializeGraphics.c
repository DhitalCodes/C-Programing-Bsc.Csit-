#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\MinGW\\lib"); 
    circle(200, 200, 50);
    getch();
    closegraph();
    return 0;
}