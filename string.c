#include<stdio.h>
int main(){
	char c;
	printf("Enter character: ");
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z') c-=32;
	else if(c >= 'A' && c <= 'Z') c+=32;
	else{
		 printf("Enter valid character.\n");
		 main();	
	} 
	printf("%c\n", c);
	return 0;
}
