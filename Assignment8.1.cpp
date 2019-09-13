#include<stdio.h>
int so_trong_mang(int x[]){
	int y;
	scanf ("%d",&y);
	for(int i = 0;i<9;i++){
		if(x[i]==y){
			printf("Co trong mang\n",x[i]);
			return 0;
		}
	}
		printf("Khong co trong mang\n");
		return 0;
	}



int so_le(int x[]){

    for (int i = 0;i<x[i];i++){
		if(x[i]%2!=0){
			printf("So le trong mang: %d\n",x[i]);
		}
	}
}


int so_fibonaci(int x[]){
	int n;
	scanf("%d",&n);
	int x1=1,x2=1,x3=2;
	for(int i=0,j=0;x1+x2<=n&&n>0;i+=j,j++){
		x1 = x2;
		x2 = x3;
		x3 = x1+x2;
	}
	printf("so thu %d trong day: %d\n",n,x3);
	return 0;
}


int main(){
	int n[10]={1,2,3,4,5,6,7,8,9,10};
    so_le(n);
    so_trong_mang(n);
    so_fibonaci(n);
	return 0;
}

