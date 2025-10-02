/*
Name:Masese Doris
Reg no:PA106/G/28790/25
Description:A c program to calculate the total water bills consumed
*/

#include<stdio.h>

int main(){
	int units ;
	float bill;
	
	//input
	printf("Enter water units consumed:");
	scanf("%d", &units);
	
	//Bill calculation
	if(units <=30){
		bill =units *20;
	}else if (units <=60){
		bill = units *25;
	}else{
		bill=units*30;
		}
		//output with 2 decimal places
		printf("Total water bill: %.2f KES\n",bill);
		
		return 0;
	}
