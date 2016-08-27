//India is great
//great is India
#include<stdio.h>
int main(){
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	char s[10000], s2[10000], t, p=-1;
	int i, j, len, k, x;
	scanf("%d", &t);
	while(p++<t){
		x=0;
		//fflush(stdin);
		gets(s);
		if(p==0) continue;
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
		printf("Case #%d: %s\n", p, s2);
	}
	return 0;
}

int slen(char * s){
	int i=0;
	while(s[i++]!='\0');
	return i-1;
}
