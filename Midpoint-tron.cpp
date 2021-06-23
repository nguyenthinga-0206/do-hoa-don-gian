#include <winbgim.h>

void put8pixel(int xc, int yc, int x, int y)
{
    putpixel(x + xc, y + yc, 2);
    putpixel(-x + xc, y + yc, 2);
    putpixel(x + xc, -y + yc, 2);
    putpixel(-x + xc, -y + yc, 2);
    putpixel( y + xc, x + yc, 2);
    putpixel(-y + xc, x + yc, 2);
    putpixel(y + xc, -x + yc, 2);
    putpixel(-y + xc, -x + yc, 2);
}

void MidPointCircle(int xc, int yc, int r)
{
    int x = 0, y = r;
    int f = 1 - r;

    put8pixel(xc, yc, x, y);

    while (x < y)
    {
        if (f < 0) f += (x << 1) + 3;
        else
        {
            y--;
            f += ((x - y) << 1) + 5;
        }
        x++;
        put8pixel(xc, yc, x, y);
    }
}

//void MidPointCircle (int a, int b, int R)
//{
//	int x = 0; int y = R;
//	int p = 1-R; 
//	while (x <= y) {
//		putpixel(x, y, 2);
//		putpixel(y, x, 2);
//		putpixel(-y, x, 2);
//		putpixel(-x, y, 2);
//		putpixel(-x, -y, 2);
//		putpixel(-y, -x, 2);
//		putpixel(y, -x, 2);
//		putpixel(x, -y, 2);
//		if (p < 0) 
//			p += 2*x+3;
//		else {
//			p += 2*x-2*y+5;
//			y--;
//		}
//		x++;
//	}
//}

int main()
{
	initwindow(600,600);
	int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\tc\\bgi");
	//Eclipse(getmaxx()/2,getmaxy()/2,150,80);
	MidPointCircle(getmaxx()/2,getmaxy()/2,100);
	getch();
	closegraph();
	return 0;
}
