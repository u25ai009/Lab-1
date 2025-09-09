#include<stdio.h>

int main()
{
	float fahrenheit,centigrade;
	
	printf("Enter the Temperature in Fahrenheit : ");
	scanf("%f",&fahrenheit);
	
	centigrade = (fahrenheit - 32)*(0.55555);
	
	printf("The temperature in centigrade is %f : ",centigrade);
	return 0;
}
