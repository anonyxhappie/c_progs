#include<stdio.h>
int main(){
	char s[20];
	int i = 0, j = 0, a[20];
	printf("Enter string: ");
	gets(s);
	if(s[0] >= 'a' && s[0] <= 'z'){
		s[0]-=32; i++;
	}
	
	while(s[i] != '\0'){
		
		i++;
	}
	 	 
	printf("%s\n", s);
	return 0;
}


