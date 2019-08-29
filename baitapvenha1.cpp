#include<stdio.h>

int main(){
	int x;
	float y;
	
	x = 1000;
	y = 0.08;
	
	float tienlaisau1nam;
	float tienlaisau2nam;
	float tienlaisau3nam;
	float tienlaisau4nam;
	
	tienlaisau1nam = x + x * y;
	tienlaisau2nam = tienlaisau1nam + tienlaisau1nam * y;
	tienlaisau3nam = tienlaisau2nam + tienlaisau2nam * y;
	tienlaisau4nam = tienlaisau3nam + tienlaisau3nam * y;
	
	printf("Tien lai sau 1 nam : %f\n",tienlaisau1nam);
	printf("Tien lai sau 2 nam : %f\n",tienlaisau2nam);
	printf("Tien lai sau 3 nam : %f\n",tienlaisau3nam);
	printf("Tien lai sau 4 nam : %f\n",tienlaisau4nam);
	
	
	return 0;
	
}	
