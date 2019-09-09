#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i =1, count = 0;
	while(i<=n){
		if(n%i==0){
			count++;
		}else{
			
		}
		i++;
	}
	if(count>2){
		printf("Khong phai snt\n");
	
	}else{
		printf("La snt\n");
	}
	return 0;
}
