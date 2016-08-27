#include<stdio.h>
int getValue(char c);
int getDigit(int num);
struct map {
	char key;
	int value;
};
struct map k[27]={
	' ', 0,
	'a', 2, 'b', 22, 'c', 222,
	'd', 3, 'e', 33, 'f', 333,
	'g', 4, 'h', 44, 'i', 444,
	'j', 5, 'k', 55, 'l', 555,
	'm', 6, 'n', 66, 'o', 666,
	'p', 7, 'q', 77, 'r', 777, 's', 7777,
	't', 8, 'u', 88, 'v', 888,
	'w', 9, 'x', 99, 'y', 999, 'z', 9999
};
int main(){
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int t, c=-1, i, v = -1, lv;
	char s[1000];
	scanf("%d", &t);
	while(c++<t){
		gets(s); i=-1;
		if(c==0) continue;
		printf("Case #%d: ", c);
		while(s[++i]!='\0'){
			lv = v;
			v = getValue(s[i]);
			if(getDigit(v) == getDigit(lv)) printf(" ");
			printf("%d", v);
		}
		printf("\n");
	}
	return 0;
}

int getValue(char c){
	int i;
	for(i=0; i<27; i++)
		if(c == k[i].key) return k[i].value; 
	return -1;
}

int getDigit(int num){
	return num%10;
}





