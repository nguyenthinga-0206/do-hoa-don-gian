#include <winbgim.h>
#include <math.h>
#define RADS PI/180
void Koch(float dir, float len, int n) 
{
	if (n > 0) {
		//V? b?n c?nh _/\_
		Koch (dir, len/3, n-1);
		dir += 60.0;
		Koch (dir, len/3, n-1);
		dir -= 120.0;
		Koch (dir, len/3, n-1);
		dir += 60.0;
		Koch(dir, len/3, n-1);
	}
	else 
		linerel(int(len *cos(dir *RADS)),int(len*sin(dir *RADS)));
}
int main(){
	Koch(0.0,0.05,3);
}
Koch(0.0,0.05,3);
//Koch (-120.0, 0.05, 3);
//Koch (120.0, 0.05, 3);
