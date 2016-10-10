#include<stdio.h>
int main(){
	char s[20];
	int i = 0;
	printf("Enter string: ");
	gets(s);
	while(s[i] != '\0'){
        if(i%2 && s[i] >= 'a' && s[i] <= 'z' ) s[i]-=32;
		i++;	
	} 	 
	printf("%s\n", s);
	return 0;
}
