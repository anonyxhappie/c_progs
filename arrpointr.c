#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int * myFunc(int);
int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int a[10];
	printf("%d\n", *(myFunc(6)+1));
	return 0;
}

int *myFunc(int n){
	int a[10]={2,43,4,56,6,9};
	return a;
}

