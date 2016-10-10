#include <stdlib.h>
#include <stdio.h>
int main(){
	printf("%d\n", system("echo 'hello'"));
	printf("%s\n", system("ls -l >> abc.txt; cat abc.txt"));
	return 0;
}
