#include<stdio.h>
int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n = 1111111111, i, count=0;
	int a[numlen(n)];
	getArrayValues(a, n);
	for(i=0; i<numlen(n)-1; i++) if(dton(a[i], a[i+1]) < 27) count++; //printf("%d ", dton(a[i], a[i+1])); 
	printf("%d\n", count);
	return 0;
}

int numlen(int n){
	int i=0;
	while(n){
		i++;
		n/=10;
	}
	return i;
}

void getArrayValues(int * p, int n){
	int i = numlen(n)-1;
	while(n){
		p[i--] = n%10;
		n/=10;
	}
}

int dton(int a, int b){
	return a*10+b;
}

int fact(int n){
	if(n == 1) return 1;
	return n*fact(n-1);
}





