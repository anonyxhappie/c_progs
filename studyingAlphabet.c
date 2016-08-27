#include<stdio.h>
int main(){
	freopen("int.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int t;
	char word[1000];
	scanf("%s", word);
	scanf("%d", &t);
	while(t--){
		int i, j, flag = 0;
		char winb[1000];
		scanf("%s", winb);
		for(i=0; i<slen(winb); i++){
			int count=0;
			for(j=0; j<slen(word); j++){
				if(winb[i] != word[j]) count++; 
			}
			if(count == j){
				flag = 1;
				break;
			}
		}
		if(flag) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}

int slen(char * s){
	int i=0;
	while(s[i++]!='\0');
	return i;
}
