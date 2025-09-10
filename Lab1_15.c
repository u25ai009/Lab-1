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
    
    if( percentage>=90 && percentage <100) 
        {
            printf("A Grade with %f percentage",percentage);
        }
    else if( percentage>=75 && percentage <90) 
        {
            printf("B Grade with %f percentage",percentage);
        } 
    else if( percentage>=50 && percentage <75) 
        {
            printf("C Grade with %f perecntage",percentage);
        } 
    else if( percentage>=35 && percentage <50) 
        {
            printf("D Grade with %f percentage",percentage);
        }
    else if( percentage>=0 && percentage <35) 
        {
            printf("Failed ! with %f percentage",percentage);
        }
    else
        {
            printf("Wrong Input");
        }    
        
}                              