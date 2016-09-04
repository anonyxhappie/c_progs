#include<stdio.h>
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%d", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%d\n", n);
#define sPRINT(s) printf("%s\n", s);
int main(){
	freopen("int.txt", "r", stdin);
	int t, i;
	nSCAN(t)
	while(t--){
		int n, count=0;
		nSCAN(n)
		int a[n];
		nLOOP(i, n){
			nSCAN(a[i])
			if(a[i]) count++;
		}
		if(count%2==0) nPRINT(0)
		else nPRINT(1)
	}
	return 0;
}


