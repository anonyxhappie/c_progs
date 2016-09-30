#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(void *, void *, int);
int main(){
	//freopen("in.txt", "r", stdin);
	int a=2, b=3;
	printf("%d %d\n", a, b);
	swap(&a, &b, sizeof(int));
	printf("%d %d\n", a, b);
	char c='A', d='B';
	printf("%c %c\n", c, d);
	swap(&c, &d, sizeof(char));
	printf("%c %c\n", c, d);
	char e[100]="akshay", f[100]="aakansha";
	printf("%s %s\n", e, f);
	swap(e, f, sizeof(e));
	printf("%s %s\n", e, f);
	return 0;
}

void swap(void * vp1, void * vp2, int size){
	char buffer[size];
	memcpy(buffer, vp1, size);
	memcpy(vp1, vp2, size);
	memcpy(vp2, buffer, size);
}

