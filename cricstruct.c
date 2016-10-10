#include<stdio.h>
//#include"myfunction.h"

void main(){
	int n, result;
	printf("Enter no. :");
	scanf("%d", &n);
	result = square(n);
	printf("The sqaure of %d is %d.\n", n, result);
}

