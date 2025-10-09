/*
Name:Masese Nyaboke Doris
Reg no:PA106/G/28790/25
Description:A c program printing numbers from 100 to 50 in descending order using
a for loop.
*/
#include<stdio.h>

int main (){
	int i;
	//loop starts from 100 and decreases until it reaches 50
	for(i=100;i>=50;i--){
		printf("%d\n",i);
	}
	return 0;
}