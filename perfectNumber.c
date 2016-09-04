#include<stdio.h>
#define nLOOP(i, n) for(i=1; i<=n; i++)
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
		int n;
		nSCAN(n)
		int p = n, sum=0, fact, r;
		while(p){
			fact=1;
			r = p%10;
			nLOOP(i, r) fact*=i;
			sum += fact;
			p/=10;
		}
		if(sum==n) sPRINT("Perfect")
		else sPRINT("Not Perfect")
	}
	return 0;
}

