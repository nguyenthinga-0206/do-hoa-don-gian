#include <winbgim.h> 
//#include <math.h>
//#include <iostream>

void Bresenham(int x1, int y1, int x2, int y2) //0<m<1
{
	int dx = abs(x2-x1);
	int dy = abs(y2-y1);
	int x = x1;
	int y = y1;
	
	putpixel(x,y,2);
	int p = 2*dy-dx;
	while(x != x2)
	{
		delay(10);
		if(p<0)
			p += 2*dy;
		else
		{
			p += 2*(dy-dx);
			y++;
		}
		x++;
		putpixel(x,y,2);
	}
}

int main()
{
	int x1,x2,y1,y2;
	initwindow(600,600);
	Bresenham(400,10,10,400);
	getch();
	return 0;
}
