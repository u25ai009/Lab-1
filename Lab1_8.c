#include<stdio.h>

int main()
{
	int days,minutes,hours;
	
	days = 31558150/(60*60*24);
	hours = (31558150 - days*60*60*24)/(60*60);
	minutes = (31558150 - days*60*60*24 - hours*60*60)/60;
	
	printf("Earth takes %d days, %d hours, %d minutes. ",days,hours,minutes);
}
