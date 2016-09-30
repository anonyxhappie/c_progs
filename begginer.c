/*
* Program for prime number
*/
#include<stdio.h>
int main(){
	int i, n, flag=0;
	scanf("%d", &n);
	int t = n, sum=0;
	while(t>0){
		sum+=poww(t%10, 3);
		t/=10;
	}
	printf("%d", sum);
	return 0;
}
int poww(int n, int p){
	int i;
	for(i=1; i<p; i++) n*=n;
	return n;
}

