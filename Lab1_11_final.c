#include<stdio.h>

int main()
{
	int seconds,hours,minutes,second;
	
	printf("Enter seconds : ");
	scanf("%d",&seconds);
	
	hours = seconds/(60*60);
	minutes = (seconds - (hours*60*60))/60;
	second = (seconds - (hours*60*60) - (minutes*60) );
	
	printf("Current time is %d:%d:%d in 24 hours clock.",hours,minutes,second);
}
	
