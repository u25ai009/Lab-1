#include<stdio.h>

int main()
{
	int phy,chem,maths,english,comp;
	int total_marks;
	float percentage;
	printf("Enter the marks scored in Physics : ");
	scanf("%d",&phy);
	printf("Enter the marks scored in Chemistry : ");
	scanf("%d",&chem);
	printf("Enter the marks scored in Maths : ");
	scanf("%d",&maths);
	printf("Enter the marks scored in English : ");
	scanf("%d",&english);
	printf("Enter the marks scored in Computer : ");
	scanf("%d",&comp);
	
	total_marks = (phy+chem+maths+english+comp);
	percentage = ((phy+chem+maths+english+comp)/5);
	
	printf("The total marks scored are %d/500 ",total_marks);
	printf("The percentage scored is %f",percentage);
	return 0;
}
