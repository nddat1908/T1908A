#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int i = 1;
	while(i<(a+b)&&i<(a+c)&&(i<b+c)){
		if((a+b>c) && (a + c>b)&& (b+c>a)){
			printf("La 3 canh cua tam giac\n");
			return 0;
		}else{
			printf("Nhap lai:\n");
			scanf("%d",&a);
	        scanf("%d",&b);
	        scanf("%d",&c);
		}
		i++;
	}
}
