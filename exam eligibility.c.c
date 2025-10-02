/*
Name:Masese Doris
Reg no:PA106/G/28790/25
Description:A c program to display whether the student is eligible for exam or 
not.
*/
#include<stdio.h>

int main(){
	float attendance,marks;
	
	//input
	printf("Enter attendance percentage:");
	scanf("%f",&attendance);
	
	printf("Enter average marks:");
	scanf("%f",&marks);
	
	//check eligibility
	if (attendance >= 75 && marks >= 40){
		printf("Eligible for final exams.\n");
	}else{
		printf("Not eligible.\n");
	}
	
	return 0;
}