#include<stdio.h>

int * num_to_digits(long long int);
int main(){
	
	long long int num = 1237;
	int i, len = numlen(num), * b = num_to_digits(num);
	
	alength = numlen(a);
	blength = numlen(b);
	adigits = num_to_digits(a);
	bdigits = num_to_digits(b);
	printf("alen = %d\nblen = %d\n", alength, blength);
	for(i=0; i<alength; i++) printf("%d ", adigits[i]);printf("\n");
	for(i=0; i<alength; i++) printf("%d ", bdigits[i]);printf("\n");
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
