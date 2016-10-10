#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define MAP_SIZE 26
struct map{
	char c;
	int n;
}arr[MAP_SIZE], brr[MAP_SIZE];

int main(){
    char* a = (char *)malloc(512000 * sizeof(char));
    //scanf("%s",a);    
	char* b = (char *)malloc(512000 * sizeof(char));
    //scanf("%s",b);
	strcpy(a, );
	strcpy();
	int i, count = 0;	
	for(i = 0; i < MAP_SIZE; i++){
		arr[i].c = brr[i].c = i + 97;
		arr[i].n = brr[i].n = 0;		
		//printf("%c ", arr[i].c);
	}
	for(i = 0; i < strlen(a); i++) arr[a[i] - 97].n++;
	for(i = 0; i < strlen(a); i++) brr[b[i] - 97].n++;
	for(i = 0; i < MAP_SIZE; i++) count += abs(arr[i].n - brr[i].n);	
	printf("%d\n", count);

    return 0;
}

