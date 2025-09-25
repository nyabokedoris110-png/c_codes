/*
Name:Masese Nyaboke Doris
Reg No:PA106/G/28790/25
Description:Finding the volume and surface area of a cylinder
*/
#include<stdio.h>

#define PI 3.14159
int main()
{
	float radius,height,volume,surface_area;
	
	printf("Enter radius of the cylinder;");
	scanf("%f",&radius);
	
	printf("Enter height of the cylinder;");
	scanf("%f",&height);
	
	surface_area=2*PI*radius*(height+radius);
	volume=PI*radius*radius*height;
	
	printf("volume of the cylinder:%.2f\n",volume);
	printf("surface area of the cylinder:%.2f\n",surface_area);
	
	return 0;
	}
	