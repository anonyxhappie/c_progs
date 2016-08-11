#include<stdio.h>
#include<stdlib.h>

int main(){
	char *p = malloc(sizeof(char));
	printf("%u = %c\n", p, *p);
	long int i;
	for(i=0;i<100000;i++)
		printf("%c", *(p - i));
	return 0;
}
