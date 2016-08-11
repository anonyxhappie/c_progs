/*
strconfig(source, c, w, l, s)
source = india is a great country and pakitan
and blah blah blah 
blah
output:
c=no. of characters
w=words
l=lines
s=spaces
*/
#include<stdio.h>
int main(){

	int *a;
	a = (int*)malloc(sizeof(int));
	a=4;
	printf("%d\n", a);	
	a = (char*)malloc(sizeof(char));
	a='a';
	printf("%c\n", a);	
	a = (int*)malloc(sizeof(int));
	int i=65;
	for(;i<91;i++){
		*(a+i)=(char)i;
		printf("%u = %c\n", (a+i), *(a+i));		
	}
	return 0;
}







