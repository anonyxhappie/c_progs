#include<stdio.h>

int main(){
	int i, flag, j;
	char s1[100], s2[100];
	gets(s1);gets(s2);
	fflush(stdin);
	while(s2[i]!='\0'){
		j=0, flag=0;
		while(s1[j]!='\0'){
			if(s2[i]==s1[j]){
				flag=1; 
				break;	
			}
			j++; 
		}
		if(flag==0) printf("%c", s2[i]);
		i++;
	}
	return 0;
}



