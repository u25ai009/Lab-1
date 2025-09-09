#include<stdio.h>

int main()
{
	int hours,minutes,seconds;
	printf("Enter hours");
	scanf("%d",&hours);
	printf("Enter minutes");
	scanf("%d",&minutes);
	printf("Enter seconds");
	scanf("%d",&seconds);
	
	int second = (hours*60*60) + (minutes*60) + seconds;
	
	printf("The time in seconds is %d : ",second);
}
