#include<stdio.h>
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%d", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%d ", n);
#define sPRINT(s) printf("%s\n", s);
int main(){
	freopen("int.txt", "r", stdin);
	int t, i, j;
	nSCAN(t)
	while(t--){
		int n, x;
		nSCAN(n)
		int a[n];
		nLOOP(i, n)	nSCAN(a[i])
		nSCAN(x)
		for(i = 0; i < n; i+=x){
			if(i+x-1 >= n) j = n-1;
			else j=i+x-1;
			for(; j >= i; j--){
				nPRINT(a[j])
			}
		}
		sPRINT("")
	}
	return 0;
}


