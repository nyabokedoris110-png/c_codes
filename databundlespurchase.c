/*
Name:Masese Nyaboke Doris
Reg No:PA106/G/28790/25
Description:A C Program to enable the user to purchase bundles 
*/
#include<stdio.h>

int main(){
	int choice;
	
//Display the menu
	printf("select data bundle\n");
	printf("1. 100MB @50 KES\n");
	printf("2. 500MB @200 KES\n");
	printf("3. 1GB @ 350 KES\n");
	printf("4. 2GB @ 600 KES\n");
	
	//prompt the user
	printf("Enter your choice(1-4):");
	scanf("%d", &choice);
	
	//switch case
	switch(choice){
		case 1:
			printf("you selected 100MB.Cost =50 KES\n");
			break;
		case 2:
			printf("you selected 500 MB.Cost =200 KES\n");
			break;
		case 3:
			printf("you selected 1GB .Cost =350 KES\n");
			break;
		case 4:
			printf("you selected 2GB .Cost =600 KES\n");
			break;
		default:
			printf("invalid choice\n");
		
	}
	
	
	
	return 0;
}
	
	
