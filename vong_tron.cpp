#include <winbgim.h> 

int main()
{
	int n=40,R=10,i;
	
	initwindow(1000,1000);
	
	while(!kbhit())
	{
		setcolor(15);
		for(i=1;i<=n;i++){
			circle(500,300,i*R);
			delay(50);
		}
		delay(500);
		setcolor(0);
		for(i=n;i>0;i--){
			circle(500,300,i*R);
			delay(50);
		}
		delay(500);
	}	
}
