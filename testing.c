#include<stdio.h>

int * num_to_digits(long long int);
int main(){
	
	long long int num = 1237;
	int i, len = numlen(num), * b = num_to_digits(num);
	printf("Len %d\n", len);
	for(i=0; i<len; i++){
		printf("%d\n", b[i]);
	}
	return 0;
}

int * num_to_digits(long long int fnum){
	int a[1000], i=numlen(fnum)-1;
	while(fnum){
		a[i--] = fnum%10;
		fnum/=10;
	}
	return a;
}

int numlen(long long int fnum){
	int i=1;
	while((fnum=fnum/10)) i++;
	return i;
}
