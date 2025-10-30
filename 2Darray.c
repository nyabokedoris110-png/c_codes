/*
Name:Masese Doris
Reg No;PA106/G/28790/25
Description:2D array(Room occupancy for one branch)
*/
#include<stdio.h>
#include<stdio.h>
#include<time.h>

int main(){
	int occupancy[5][10];
	int i,j;
	int occupied,vacant;
	
	srand(time(0)); //Seed random numbers 
	
	//Assign random occupancy (1=occupied,0=vacant)
	for (i=0;i<5;i++){
		for (j=0;j<10;j++){
			occupancy[i][j]=rand()%2;//random 0 or 1
		}
	}
	printf("Room occupancy(1=occupied,0=vacant):\n\n");
	
	//Display occupancy per floor
	for(i=0;i<5;i++){
		occupied=0;
		vacant=0;
		
		printf("floor %d:",i+1);
		for(j=0;j<10;j++){
			printf("%d",occupancy[i][j]);
			if (occupancy[i][j]==1)
				occupied++;
			else 
				vacant++;
		}
		printf("|occupied:%d|vacant:%d\n",
		occupied,vacant);
	}
	return 0;
}