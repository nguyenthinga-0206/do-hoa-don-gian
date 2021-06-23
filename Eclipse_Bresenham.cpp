//#include <math.h>
#include <winbgim.h> 

void plot(int xc, int yc, int x, int y)
{
	putpixel(xc+x,yc+y,15);
	putpixel(xc-x,yc+y,15);
	putpixel(xc-x,yc-y,15);
	putpixel(xc+x,yc-y,15);
	
	delay(10);
}

void Eclipse(int xc, int yc, int a, int b)
{
	float p,a2,b2;
	int x,y;
	a2 = a*a;
	b2 = b*b;
	
	//Ve nhanh thu nhat tu tren xuong
	x = 0, y = b;
	p = 2*((float)b2/a2) - 2*b + 1;
	while(((float)b2/a2)*x <= y)
	{
		plot(xc,yc,x,y);
		if(p<0)
			p += 2*((float)b2/a2) * (2*x+3);
		else
		{
			p = p - 4*y + 2*((float)b2/a2) * (2*x+3);
			y--;
		}
		x++;
	}
	
	//Ve nhanh thu hai tu duoi len
	x = a, y = 0;
	p = 2*((float)a2/b2) - 2*a + 1;
	while(((float)a2/b2)*y <= x)
	{
		plot(xc,yc,x,y);
		if(p<0)
			p += 2*((float)a2/b2) * (2*y+3);
		else
		{
			p = p - 4*x + 2*((float)a2/b2) * (2*y+3);
			x--;
		}
		y++;
	}
}

int main()
{
	initwindow(600,600);
	//Eclipse(getmaxx()/2,getmaxy()/2,150,80);
	Eclipse(300,300,150,150);
	getch();
	return 0;
}
