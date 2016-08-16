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
// Use folding on a string, summed 4 bytes at a time
long sfold(String s, int M) {
     int intLength = s.length() / 4;
     long sum = 0;
     for (int j = 0; j < intLength; j++) {
       char c[] = s.substring(j * 4, (j * 4) + 4).toCharArray();
       long mult = 1;
       for (int k = 0; k < c.length; k++) {
	 sum += c[k] * mult;
	 mult *= 256;
       }
     }

     char c[] = s.substring(intLength * 4).toCharArray();
     long mult = 1;
     for (int k = 0; k < c.length; k++) {
       sum += c[k] * mult;
       mult *= 256;
     }

     return(Math.abs(sum) % M);
}

int h(String x, int M) {
   char ch[];
   ch = x.toCharArray();
   int xlength = x.length();

   int i, sum;
   for (sum=0, i=0; i < x.length(); i++)
     sum += ch[i];
   return sum % M;
 }
