//string lappindrome
#include<stdio.h>
int main(){
	char s[100000];
	int i, len, pflag=0, lflag=0;
	//scanf("%s", s);
	gets(s);
	len = slen(s);
	for(i=0; i<len/2; i++){
		if(s[i]!=(s[len-1-i])){
			pflag++;
			break;
		}
	}
	for(i=0; i<len/2; i++){
		if(s[i]!=(s[len/2+1]+i)){
			lflag++;
			break;
		}
	}		

	if(!pflag || !lflag) printf("%s is Lapin.\n", s);
	else printf("%s is not Lapin.\n", s);
	return 0;
}

//zabczba
//abzcabz

int slen(char * s){
	int i=0;
	while(s[i++]!='\0');
	return i-1;
}
