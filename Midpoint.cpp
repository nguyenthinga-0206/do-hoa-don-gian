#include <winbgim.h>
#include <math.h>
#include <iostream>

//void Midpoint(int x1, int y1, int x2, int y2)
//{
//	int dx,dy,p,x,y;
//	dy = y2-y1;
//	dx = -(x2-x1);
//	y = y1;
//	x = x1;
//	
//	putpixel(x,y,2);
//	p = 2*dy+dx;
//	while(x<x2)
//	{
//		if(p<0)
//			p += 2*dy;
//		else
//		{
//			y++;
//			p += 2*(dy+dx);
//		}
//		x++;
//		putpixel(x,y,2);
//		delay(10);
//	}
//}

void midpointLine(int x1, int y1, int x2, int y2)
{
	int Dx = x2 - x1;
	int Dy = y2 - y1;
	int x = x1;
	int y = y1;
	putpixel(x1, y1, 2);
	//float D = Dy - (Dx >> 1);  
	float D = Dy - Dx/2;
	while(x != x2)
	{
		delay(100); 
		x++;
		if (D < 0 )
		{
			D = D + Dy;
		}
		else 
		{
			D = D + (Dy - Dx);
			y++;
		}
		putpixel(x, y, 2);
	}
}

int main()
{
	initwindow(600,600);
	//Midpoint(10,10,400,400);
	midpointLine(400,10,10,400);
	getch();
	return 0;
}
