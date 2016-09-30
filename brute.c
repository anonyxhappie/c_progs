//wap to input a string and find 1st non repeating character
#include<stdio.h>
int slen(char * s);
int main(){
	char s[100];
	int i, j, flag=0;
	scanf("%s", s);
	for(i=0; i<slen(s); i++){
		for(j=0; j<i; j++){
			if(s[i]==s[j]){
				flag = 1;
				break;	
			} 
		}
		if(flag==1) break;
	}		
	j=i;
	for(i=0; i<j; i++){
		if(s[i]!=s[j]){
			printf("%c", s[i]);
			break;
		}
	}
	return 0;
}

int slen(char * s){
	int i=0;
	while(s[i++]!='\0');
	return i-1;
}
