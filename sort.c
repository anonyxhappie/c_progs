#include<stdio.h>
#include<stdlib.h>
void swap(void *, void *, size_t);
int main(){
	int i,j,n,a[]={56, 2, 8, 32, 64, 23, 7};
	float f[] = {23.1, 4.3, 54.3, 2.5, 2.2, 35.4, 2.1};
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}

void * bubble_sort(void * arr, int arr_size){
	int i, j;
	for(i=0; i<arr_size-1; i++){
		for(j=i+1; j<arr_size; j++){
			if(a[j] < a[i]) swap(&a[j], &a[i], sizeof(*a));
		}
	}
	return a;
}

int arrlen(void * arr, size_t _size_){
	int i = 0;
	while(*(char *)(arr+i++*_size_));
	return i-1;
}

int compare(void * a, void * b){
	
}

void swap(void * a, void * b, size_t _size_){
	char buffer[100];
	memcpy(buffer, a, _size_);
	memcpy(a, b, _size_);
	memcpy(b, buffer, _size_);
}
