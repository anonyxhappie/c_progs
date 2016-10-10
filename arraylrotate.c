#include<stdio.h>
int main(){
int a[] = {1, 2, 3, 4, 5};
int i, k = 0, arrar_size = 5, rotate = 2;
for(i=rotate; k++<5; i++){
	if(i==5) i=0;
	printf("%d ", a[i]);
}
return 0;
}
