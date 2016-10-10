#include<stdio.h>

int main(){
	FILE * fwptr, * frptr;
	frptr = fopen("get.txt", "r+");
	fwptr = fopen("out.txt", "w+");
	char c, t='\0', count=0;
	int i, j;
	while((c = getc(frptr))!=EOF){
		if(c==' ') if(t==' ') continue;	 
		if(c=='\n') if(t=='\n') continue;
		if(c=='{') count++;
		if(c=='}') count--;
		if(t=='\n'){
			for(i=0; i<count; i++){
				for(j=0; j<4; j++){
					putc(' ', fwptr);
				}
			}
		}
		if(c=='"'){
			putc(c, fwptr);
			while((c = getc(frptr))!='"'){
				putc(c, fwptr);
			}
			putc(c, fwptr);
			t=c;
			continue;
		}	 
		putc(c, fwptr);          
		if(c==';' || c=='>' || c=='{' || c=='}'){
				putc('\n', fwptr);
				c='\n';	 	
		} 
		t=c;
	}
	fclose(fwptr);
	fclose(frptr);
	fwptr = fopen("out.txt", "r+");
	while((c = getc(fwptr))!=EOF) printf("%c", c);
	fclose(fwptr);
	return 0;
}

