#include<stdio.h>
int main(){
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	z = x;
	x = y;
	y = z;
	printf("Gia tri cua x: %d",x);
	printf("Gia tri cua y: %d",y);
		return 0;
	}

