/*
Name:Masese Doris
Reg No:PA106/G/28790/25
Description:1D array-weekly Revenue Tracker
*/
#include<stdio.h>

int main(){
	float revenue[7];
	float total=0,average;
	int i;
	
	//input revenue for each day
	printf("enter revenue for each of the 7 days:\n");
	for (i=0;i<7;i++){
		printf("Day %d:",i+1);
		scanf("%f",&revenue[i]);
		total += revenue[i];
	}
	
	//calculate average
	average = total/7;
	
	//Display results
	printf("\nTotal weekly revenue:%.2f\n",total);
	printf("average daily revenue:%.2f\n",average);
	
	return 0;
}