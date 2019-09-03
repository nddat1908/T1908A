#include<stdio.h>
#include<math.h>

int main (){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if ((a+b>c) && (a +c>b )&& (b + c >a)){
		printf("La 3 canh cua tam giac\n");
		int chuvi = a + b +c;
		printf("Chu vi tam giac: %d\n",chuvi);
		int dientich;
		dientich = sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
		printf("Dien tich tam giac: %d\n",dientich);
	}else{
		printf("Khong phai 3 canh cua tam giac\n");
	}
}
