#include <stdio.h>
#include <math.h>

int main(void)
{
	int x , y;
	char ch;
	printf("input calculation");
	scanf("%d %c %d", &x, &ch, &y);
	
	switch(ch)
	{
		case '+':
			printf("%d", x+y);
			break;
		case '-':
			printf("%d", x-y);
			break;	
		case '*':
			printf("%d", x*y);
			break;
		case '/':
			printf("%d", x/y);
			break;
		case '%':
			printf("%d", x%y);
			break;
		default: 
			printf("stop messing around");
			break;
	}
	
	return 0;
}
