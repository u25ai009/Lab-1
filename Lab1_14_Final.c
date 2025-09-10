#include<stdio.h>

int main()
{
	char character;
	
    printf("Enter any character : ");
	scanf("%c",&character);
	
	if (character>=65 && character<=90) {
		printf("Capital alphabet");
	} else if (character>=97 && character<=122) {
		printf("Small alphabet");
	}
	
}