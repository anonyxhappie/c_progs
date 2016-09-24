#include<stdio.h>
#include<string.h>
int isPalin(char * s);
int indexofDot(char * s);
int main(){
	//freopen("int.txt", "r", stdin);
	char s2[1000], s[1000];
	int t, flag;
	scanf("%d", &t);
	while(t--){
		scanf("%s", s);
		int i, len=strlen(s), j;
		j = len-1, flag=0;
		for(i=0; i<=len/2; i++, j--){
			if(s[i]=='.' && s[j]=='.'){
				s[i] = 'a';
				s[j] = 'a';
			}else if(s[i]=='.') s[i] = s[j];
			else if(s[j]=='.') s[j] = s[i];
			else if(s[i]!=s[j]){
				printf("%d\n", -1);
				flag=1;
				break;
			}
		}		
		if(!flag) printf("%s\n", s);
	}
	return 0;
}

int isPalin(char * s){
	char s2[1000];
	strcpy(s2, s);
	return strcmp(s, strrev(s2));
}

