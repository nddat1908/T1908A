#include<stdio.h>
int main (){
	int x[12];
	float trungbinh;
	int tong = 0;
	for (int i = 0;i<12;i++){
		scanf("%d",&x[i]);
	}
	for (int i = 0;i<12;i++){
		tong += x[i];
	}
		trungbinh = (float)tong/12;
	printf("Gia tri tong cua mang: %f\n",tong);
	printf("Gia tri trung binh cua mang: %f\n",trungbinh);
	return 0;
}
