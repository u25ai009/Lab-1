#include<stdio.h>

int main()
{
	int character;
	
    printf("Enter any character : ");
	scanf("%d",&character);
	
	if (character>=65 and character<=90) {
		printf("Capital alphabet");
	} else if (character>=97 and character<=122) {
		printf("Small alphabet")
	}
	
