#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
		if(n>=2&&n<=7){
			printf("%d la thu trong tuan\n",n);
		}else if(n==8){
			printf("Chu nhat la thu trong tuan\n",n);
		}else{
			printf("Nhap lai\n");
		}
		return 0;
	}


