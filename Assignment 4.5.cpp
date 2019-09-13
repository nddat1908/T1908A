#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i = 4;
	int x1=1,x2=1,x3=2;
	while(x3<=n){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	printf("So thu %d trong day: %d\n",n,x2);
	return 0;
}
