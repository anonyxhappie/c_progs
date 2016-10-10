#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
struct map{
	char c;
	int n;
};

int contains(struct map * arr, int * arr_i, char c);
void add(struct map * arr, int * arr_i, char c);

int main(){
    char* a = (char *)malloc(512000 * sizeof(char));
    scanf("%s",a);
    char* b = (char *)malloc(512000 * sizeof(char));
    scanf("%s",b);

	struct map arr[strlen(a)], brr[strlen(b)];
	int i, index, arr_i = 0, brr_i = 0;	
	
	for(i = 0; i < strlen(a); i++){
		if((index = contains(arr, &arr_i, a[i])) == -999) add(arr, &arr_i, a[i]);
		else arr[index].n++;
	}
	for(i = 0; i < strlen(b); i++){
		if((index = contains(brr, &brr_i, b[i])) == -999) add(brr, &brr_i, b[i]);
		else brr[index].n++;
	}	
	//for(i=0; i<arr_i; i++) printf("[%c, %d]\n", arr[i].c, arr[i].n);
	//for(i=0; i<brr_i; i++) printf("[%c, %d]\n", brr[i].c, brr[i].n);
	int count = 0;
	for(i = 0; i < arr_i; i++){
		if((index = contains(brr, &brr_i, a[i])) == -999) count+=arr[i].n;
		else count+=abs(arr[i].n - brr[index].n);
	}
	for(i = 0; i < brr_i; i++){
		if((index = contains(brr, &brr_i, a[i])) == -999) count+=arr[i].n;
	}
	printf("%d\n", count);

    return 0;
}

void add(struct map * arr, int * arr_i, char c){
	arr[*arr_i].c = c;
	arr[*arr_i].n = 1;
	(*arr_i)++;
}

int contains(struct map * arr, int * arr_i, char c){
	int i;
	for(i=0; i<*arr_i; i++){
		if(arr[i].c == c) return i;
	}
	return -999;
}
