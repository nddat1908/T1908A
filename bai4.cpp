#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float delta;
	float x1;
	float x2;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	delta= b*b-4*a*c;
	if(delta >0){
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet:\n");
		printf("x1= %f\n",x1);
		printf("x2= %f\n",x2);
	}else if(delta == 0){
		x1 = x2 = -b/(2*a);
		printf("Phuong trinh co nghiem kep:\n");
		printf("x1=x2=%f",-b/(2*a));
	}else{
		printf("Phuong trinh vo nghiem");
	}
	return 0;
}
