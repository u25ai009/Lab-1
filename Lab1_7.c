#include<stdio.h>

int main()
{
	int base,height;
	
	printf("Enter base of triangle : ");
	scanf("%d",&base);
	printf("Enter height of triangle : ");
	scanf("%d",&height);
	
	printf("The area of a triangle is %f",(0.5*base*height));
	return 0;
}
