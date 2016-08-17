#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define incr(x) (++(x))
int arrlen(void *, size_t);
int main(){
	int a[]={3,5,7,2,3,3,8,98,78,4,3,2,1};
	float f[]={3.4, 5.3, 2.3, 5.5, 6.6};
	char c[]={'c', 's', 't', 'u', 'p', 'a', 'z'};
	char *s[]={"sdfs", "sdsf", "sfsf", "dsfsf"};
	//printf("%d\n", arrlen(a, sizeof(int)));
	//printf("%d\n", arrlen(f, sizeof(float)));
	//printf("%d\n", arrlen(c, sizeof(char)));
	//printf("%d\n", arrlen(s, sizeof(char*)));
	printf("%d\n", al(a));
	return 0;
}

int arrlen(void * arr, size_t _size_){
	int i = 0;
	while(*(char *)(arr+i++*_size_));
	return i-1;
}

int al(void * arr){
	int i=0, temp;
	temp=arr+i;
	while(incr(temp)){
		i++;
		temp=arr+i;	
	}
	return i;
}

