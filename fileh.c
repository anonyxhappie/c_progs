#include<stdio.h>

int main(){
	FILE * fwptr, * frptr;
	fwptr = fopen("a.txt", "a+");
	frptr = fopen("a.txt", "r+");
	char c;
	while((c = getchar())!='z'){
		putc(c, fwptr);
	}
	fclose(fwptr);
	while((c = getc(frptr))!=EOF){
		printf("%c", c);
	}
	fclose(frptr);
	return 0;
}

