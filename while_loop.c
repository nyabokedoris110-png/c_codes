/*
Name:Masese Nyaboke Doris
Reg no:PA106/G/28790/25
Description:A C program that implements the number guessing game 
*/
#include<stdio.h>
#include<stdlib.h> //for rand() and srand()
#include<time.h> //for time()

int main(){
	int secretnumber,guess,attempts =0;
	
	//seed the random number generator
	srand(time(0));
	
	//generate a random number between 1 and 20 (inclusive)
	secretnumber=rand()%20+1;
	
	printf("welcome to the number guessing game!\n");
	printf("i have chosen a number between 1 and 20.\n");
	printf("can you guess what it is?\n");
	
	//repeat untill the player guesses correctly 
	do{
		printf("Enter your guess:");
		scanf("%d",&guess);
		
		attempts++;//count every attempt
		
		if(guess > secretnumber){
			printf("too high!\n");
		}
		else if (guess<secretnumber){
			printf("too low!\n");
		}
		else{
			printf("congratulations!you guessed the correct number %d!\n",secretnumber);
			printf("it took you %d attempts.\n",attempts);
		}
		
	}while (guess !=secretnumber);
	
	return 0;
		
}