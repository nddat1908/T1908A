#include<stdio.h>
int main(){
	//Vong nhap
	int n[20];
	int i= 0;
	for(int i = 0;i<20;i++){
		scanf("%d",&n[i]);
	}
	for (int i = 0;i<20;i++){
		if(n[i]%2 !=0){
			printf("So le trong mang: %d\n",n[i]);
		}
	}
	//Vòng ki?m tra le

	return 0;
}
