#include <stdio.h>
#include <stdlib.h>

int values[] = { 88, 56, 100, 2, 25 };
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
char vals[] = { 'c', 'r', 'a', 'z', 'b' };
int cmpf (const void * a, const void * b){
   return ( *(char*)a - *(char*)b );
}

int main(){
   int n;
   for( n = 0 ; n < 5; n++ ){
   	  printf(" [%d ", values[n]);
      printf("%c] ", vals[n]);
   } 
      
   qsort(values, 5, sizeof(int), cmpfunc);
   qsort(vals, 5, sizeof(char), cmpf);
   printf("\n\n");
   for( n = 0 ; n < 5; n++ ){
   	  printf(" [%d ", values[n]);
      printf("%c] ", vals[n]);
   } 
   return 0;
}
