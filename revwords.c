#include<stdio.h>
#include<string.h>
int main(){
	int n, i, j, k, l = 0, count;
	char str[100], nstr[100];
	scanf("%d", &n);
	while(l < n){
		gets(str);
		k = 0, count = 1;
		for(i = strlen(str)-1; i>=0; i--, count++){
			if(str[i] == ' ' || i==0){
				if(!i && str[i]!=' ') j=i;
				else j=i+1;
				while(j<i+count) nstr[k++]=str[j++];
				if(i) nstr[k++] = ' ';		
				count = 0;
			}
		}
		nstr[k] = '\0';
		printf("Case #%d: %s\n", ++l, nstr);	
	}
	return 0;
}
