/*
Name:Masese Nyaboke Doris
Reg No:PA106/G/28790/25
Description:A  c program that uses a while loop to stimulate atm withdrawals until
the account balance becomes zero or negative.
*/
#include<stdio.h>

int main(){
	float balance,withdraw;
	
	//ask user for initial balance
	printf("Enter your account balance:");
	scanf("%f",&balance);
	
	//continue withdrawals while balance is greater than 0
	while (balance>0){
		printf("Enter amount to withdraw:");
		scanf("%f",&withdraw);
		
		balance=balance-withdraw;
		
		//Display current balance
		printf("Remaining balance:%2f\n",balance);
		
		//Check if balance has become zero or negative
		if(balance<=0){
			printf("Your account balance is insufficient.\n");
		}
	}
	return 0;
}