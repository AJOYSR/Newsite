#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT,gm;

    initgraph(&gd,&gm,"");
    float x,y;
    int a,b;
    cout << "Enter a point p(x,y) : ";
    cin >> x >> y;
    a=x,b=y;
    putpixel(a,b,YELLOW);
    getch();
    closegraph();
    return 0;
}
