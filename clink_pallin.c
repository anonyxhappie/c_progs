#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int myFunc(int, int);
int main(){
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	myFunc(2, 3);
	return 0;
}

int myFunc(int a, int b){

	return (a+b);
}

