#include<stdio.h>
#include <stdlib.h>
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%d", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%d\n", n);
#define sPRINT(s) printf("%s\n", s);
int compf (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
int main(){
	freopen("int.txt", "r", stdin);
	int t, i;
	nSCAN(t)
	while(t--){
		int n;
		nSCAN(n)
		int a[n];
		nLOOP(i, n) nSCAN(a[i])
		qsort(a, n, sizeof(int), compf);
		if(n%2) nPRINT(a[n/2])
		else nPRINT((a[(n-1)/2] + a[((n-1)/2)+1])/2)
	}
	return 0;
}


