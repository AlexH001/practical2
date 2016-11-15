#include <stdio.h> 

int main(void)
{
	int h , m;
	
	printf("input time");
	scanf("%d:%d",&h,&m);
	
	if  (h>12)
		
	{
		h=h-12;
		printf("time in 12 hour format=%2.2d:%2.2d pm", h, m);
	}	

	else
	{	
        h=h;
		m=m; 
		printf("time in 12 hour format=%2.2d:%2.2d am", h, m);
	}
		return 0;
}
