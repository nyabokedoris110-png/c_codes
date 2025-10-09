/*
Name:Masese Nyaboke Doris
Reg no:PA106/G/28790/25
Description:A C program that uses a do while loop to repeatedly ask the user
for a password untill the correct one("1234")is entered.
*/
#include<stdio.h>
#include<string.h> //for strcmp()

int main(){
	char password[20];
	
	do{
		printf("Enter password:");
		scanf("%s",password);
		
		if(strcmp(password,"1234")!=0){
			printf("Incorrect password.Try again.\n");
		}
	}while (strcmp(password,"1234")!=0);
	
	printf("Access granted.\n");
	
	return 0;
	
}