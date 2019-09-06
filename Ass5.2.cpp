#include<stdio.h>
int main(){
	int n;
	printf("Nhap n:\n");
	scanf("%d",&n);
	for (;n<1||n>3;){
		printf("Nhap lai\n");
		scanf("%d",&n);
	}
	    if(n==1){
			printf("%d.Cafe\n",n);
		}else if(n==2){
			printf("%d.Sinh to\n",n);
		}else if(n==3){
			printf("%d.Nuoc ep\n",n);

		}else{
			
		}
		return 0;
}

