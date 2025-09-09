#include<stdio.h>

int main()
{
	int x,y,t;
	
	printf("Enter number x : ");
	scanf("%d",&x);
	printf("Enter number y : ");
	scanf("%d",&y);
	
	t = x;
	x = y;
	y = t;
	
	printf("x = %d \n",x);
	printf("y = %d\n",y);
	
	return 0;
}
	
	
