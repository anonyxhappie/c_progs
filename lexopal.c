#include<stdio.h>
#include<string.h>
int isPalin(char * s);
int indexofDot(char * s);
int main(){
//	freopen("int.txt", "r", stdin);
	char s2[1000], s[1000];
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("%s", s);
		strcpy(s2, s);
		int i;
		for(i=97; i<123; i++){
			s2[indexofDot(s)] = i;
			if(!isPalin(s2)){
				printf("%s\n", s2);
				break;
			}
			s2[indexofDot(s)] = '.';
		}
		if(i==123) printf("-1\n");
	}
	return 0;
}

int isPalin(char * s){
	char s2[1000];
	strcpy(s2, s);
	return strcmp(s, strrev(s2));
}

int indexofDot(char * s){
	int i;
	for(i=0; i<strlen(s); i++)
		if(s[i] == '.') return i;
	return -1;
}
