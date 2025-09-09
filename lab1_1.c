#include<stdio.h>

int main()
{
	int principal,rate,time;
	printf("Enter the principal amount : ");
	scanf("%d",&principal);
	printf("Enter the rate of interest : ");
	scanf("%d",&rate);
	printf("Enter the time period in years for investment : ");
	scanf("%d",&time);
	
	int simple_interest = (principal*rate*time)/100;
	printf("The simple interest for principal amount %d for %d years with a rate of %d is %d .",principal,time,rate,simple_interest);
	return 0;
}
