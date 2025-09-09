#include<stdio.h>

int main()
{
	int basic_salary,HRA,bonus,others;
	
	printf("Enter the Basic Salary : ");
	scanf("%d",&basic_salary);
	printf("Enter the HRA amount : ");
	scanf("%d",&HRA);
	printf("Enter the Bonus amount : ");
	scanf("%d",&bonus);
	printf("Enter the Other Allowances  : ");
	scanf("%d",&others);
	
	printf("The gross salary of the employee is : %d \n",(basic_salary+HRA+bonus+others));
	return 0;
}
