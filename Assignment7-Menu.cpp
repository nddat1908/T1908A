#include<stdio.h>
int main(){
	int a,b,c;
		do{
			printf("Menu: \n");
	        printf("1.Chon mon an\n");
	        printf("2.Chon do uong\n");
	        printf("3.Thanh toan\n");
	        printf("4.Thoat chuong trinh\n");
	        scanf("%d",&a);
				switch(a){
		case 1:printf("Chon mon an\n");
			printf("1.Com ga\n");
			printf("2.Pho\n");
			printf("3.Bun\n");
			printf("4.Quay lai\n");
			printf("Chon:");
			scanf("%d",&b);
			if(b==1||b==2||b==3){
				printf("Cam on");
			}else{
				
			}
			break;
        case 2:printf("Goi do uong\n");
        	printf("1.Cafe\n");
        	printf("2.Nuoc ep\n");
        	printf("3.Sinh to\n");
        	printf("4.Quay lai\n");
        	scanf("%d",&c);
        	if(c==1||c==2||c==3){
				printf("Cam on\n");
			}else{
				
			}
			break;
		case 3:printf("So tien thanh toan:\n Cam on\n");break;
		case 4:printf("Dung chuong trinh");break;	
		}

    }while(a !=3 && a !=4);	
  return 0;
}



