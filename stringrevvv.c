//India is great
//great is India
#include<stdio.h>
int main(){
	char s[100], s2[100];
	int i, j, len, k, x=0;
	gets(s);
	len = slen(s);
	j=0, k=0;
	for(i=len-1; i>=0; i--){
		if(i==0){
			j=i;
			while(s[j]!=' '){
				s2[k++]=s[j++];
			}		
		}
		else if(s[i]==' '){			//&& s[i-1]!=' '){
			x++;
			j=i+1;
			if(x==1){
				while(s[j]!='\0'){
					s2[k++]=s[j++];
				}
			}else{
				while(s[j]!=' '){
					s2[k++]=s[j++];
				}		
			}
			if(i!=0) s2[k++]=' ';
		}
	}	
	s2[k]='\0';
	printf("%s\n", s2);
	return 0;
}

int slen(char * s){
	int i=0;
	while(s[i++]!='\0');
	return i-1;
}
