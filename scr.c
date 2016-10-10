#include<stdio.h>
#include<stdlib.h>
int main(){
	char * a = malloc(sizeof(char)*1000005);
	long int i=0;
	*(a+i) = 'x';
	for(i=1;i<1000000;i++){
		*(a+i) = 'y';
	}
	*(a+i) = 'z';
	*(a+ ++i) = '\0'; 
	//printf("%s", a);
	for(;i>=0;i--){
		printf("%c", *(a+i));
	}
	//scr((a+i), 'a', -1);
	return 0;
}
/*
void scr(char *a, char c, int i){
	i++; 
	scr(a, a[i], i);
	printf("%c", a[i]);
}
*/
