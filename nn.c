#include<stdio.h>
int main(){
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int a, b, result;
	scanf("%d %d", &a, &b);
	result = a - b;
	if(result%9) result++;
	else result--;
	printf("%d", result);
	return 0;
}

/*
in.txt
5858 1234

out.txt
4625
*/
