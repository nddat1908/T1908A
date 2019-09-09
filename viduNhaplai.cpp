#include<stdio.h>
int main(){
	char c;
	printf("Chon yes/no(y/n):\n");
	scanf("%c",&c);
	while(c!= 'y' && c!='n'){
		printf("Chon yes/no (y/n):\n");
		scanf("%c",&c);
	}
	return 0;
	
}
	
