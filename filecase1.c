#include<stdio.h>

int main(){
	FILE * fwptr, * frptr;
	frptr = fopen("get.txt", "r+");
	fwptr = fopen("out.txt", "w+");
	char c;
	while((c = getc(frptr))!=EOF){
		putc(c, fwptr);
		if(c==';' || c=='>' || c=='{' || c=='}') putc('\n', fwptr);
	}
	fclose(frptr);
	return 0;
}

