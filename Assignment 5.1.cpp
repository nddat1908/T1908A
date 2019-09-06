#include<stdio.h>
int main(){
	int n;
	int i=0;
	printf("Nhap n:\n");
	scanf("%d",&n);
	for(;n>10;){
		n=n/10;
		i++;
	}
	printf("So co %d chu so\n",i+1);
	return 0;
}
