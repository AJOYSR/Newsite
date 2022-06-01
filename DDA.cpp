#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    float x1,x2,y1,y2,dx,dy,length,x,y,i;

    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    cout << "Enter x1 and y1 : ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2 : ";
    cin >> x2 >> y2;

    if(fabs(x2-x1)>fabs(y2-y1))
        length = fabs(x2-x1);
    else length = fabs(y2-y1);

    dx = (x2-x1)/length;
    dy = (y2-y1)/length;

    x = x1;
    y = y1;

    for(i=0;i<=length;i++)
    {
        putpixel(x,y,GREEN);
        x = x + dx;
        y = y + dy;
        delay(30);
    }

    getch();
    closegraph();

    return 0;
}

