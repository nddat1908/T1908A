#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i = 1;
	while(i<n){
		if(i%2==0){
			printf("So chan nho hon la %d\n",i);
		}
		i++; 
	}
	return 0;
	}
