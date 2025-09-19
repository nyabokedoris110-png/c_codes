/*
Name:Masese Nyaboke Doris
Reg no:PA106/G/28790/25
Description:A program to prompt the user to enter and display (height,id number and bank balance
*/

#include<stdio.h>
int main()
{
	float height; 
	int idnumber;
	float bank_balance;
	char github[50],email[50];
	
	printf("Enter your height in meters :");
	scanf("%f",&height);
	
	printf("Enter your id number:");
	scanf("%d",&idnumber);
	
	printf("Enter your bank balance:");
	scanf("%f",&bank_balance );
	
	printf("Enter your Github username:");
	scanf("%s",github);
	
	printf("Enter your email");
	scanf("%s",email);

	printf("\nyour details:\n");
	printf("height: %.2f\n", height);
	printf("id Number: %d\n", idnumber);
	printf("bank balance: %.2f\n", bank_balance);
	printf("github: %s\n", github);
	printf("email: %s\n", email);
	
	
	return 0;
}