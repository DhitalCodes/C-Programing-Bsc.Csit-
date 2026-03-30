#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gd=DETECT,gm;
    int x=300,y=200,r=100;
    initgraph(&gd,&gm,"C:\\MinGW\\lib");
    circle(x,y,r);
    getch();
    return 0;
}