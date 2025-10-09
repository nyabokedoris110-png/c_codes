/*
Name:Masese Nyaboke Doris
Reg No:PA106/G/28790/25
Description:A  program that implements the age of a customer and states whether they qualify 
for the loan or not
*/

#include<stdio.h>
int main()
{
	int age;
	float income;
	//prompt the user to enter their details
	printf("Enter your age:-");
	scanf("%d",&age);
	
	printf("Enter your monthly income:-");
	scanf("%f",&income);
	
	if(age >= 21 && income >= 21000)
	{
		printf("Congratulations you qualify for the loan");
	}	
		
		else {
						
			printf("Unfortunately,we are unable to offer you a loan at this time");	
				}
	
	return 0;
}

	
