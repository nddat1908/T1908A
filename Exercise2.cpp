#include<stdio.h>
#include<string.h>
void lowerCase(char s[]){
	for(int i = 0;i<strlen(s);i++){
		if(s[i]>65 && s[i]<90){
		    s[i]+=32;
		}
	}
}

int main(){
	char s[100];
	printf("Enter string: ");
	scanf("%s",s);
    lowerCase(s);	
    printf("Upper Case: %s ",s);
}
