#include<stdio.h>
int main(){
	int n = 4 ;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<=n;j++){
			if(j==0||j==n ){
				printf("| ");
			}else{
					printf(" ");
			}
		}
			printf("\n\n");
	}
}
