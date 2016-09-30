#include<stdio.h>
#include<string.h>
int main(){
	char str[3] = {'a', 'b', '\0'};
	int k = 3;
	countAllPossibleStringsInStr(str, k, "");
}

void countAllPossibleStringsInStr(char * str, int k, char * prefix){
	if(k == 0){
		printf("%d\n", prefix);
		return;
	}
	int i;
	for(i=0; i<2; i++){
		char newPrefix;
		strcat(newPrefix, str[i]);
		
		countAllPossibleStringsInStr(str, k-1, newPrefix);
	}
}
