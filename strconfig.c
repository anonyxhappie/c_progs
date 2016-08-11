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
void strconfig(char *, int *, int *, int *, int *);

int main(){
	
	char source[200] = "India is a great	 country\nand Pakistan and\nblah blah blah blah";
	int c = 0, w = 0, l = 0, s = 0;
	
	strconfig(source, &c, &w, &l, &s);
	printf("String :\n%s\n\nContains-->\nLetters : %d\nWords : %d\nLines : %d\nSpaces : %d\n", source, c, w, l, s);
	
	return 0;
}

void strconfig(char *source, int *c, int *w, int *l, int *s){
	int i = -1;
	if(source[0] == '\0') return;
	while(source[++i] != '\0'){
		if(source[i+1] != ' ' && source[i] == ' ' || source[i] == '\n') *w = *w + 1;
		if(source[i] == '\t') *s = *s + 4;
		if(source[i] == '\n') *l = *l + 1;
		if(source[i] == ' ') *s = *s + 1;
	}	*w = *w + 1; *l = *l + 1; *c = i;
}

