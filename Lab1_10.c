#include<stdio.h>

int main()
{
	int phy,chem,maths,entrance;
	float cut_off;

	printf("Enter the marks scored in Physics out of 200 : ");
	scanf("%d",&phy);
	printf("Enter the marks scored in Chemistry out of 200 : ");
	scanf("%d",&chem);
	printf("Enter the marks scored in Maths out of 200 : ");
	scanf("%d",&maths);
	printf("Enter the marks scored in Entrance exam out of 100 : ");
	scanf("%d",&entrance);
	
	cut_off = (phy*0.5) + (chem*0.5) + (maths*0.5) + entrance;
	
	printf("The cut off marks of the student is %f",cut_off);
}
	
