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
		int n, count=0;
		nSCAN(n)
		nLOOP(i, n) if(n%i==0 && i%3==0) count++;
		nPRINT(count);
	}
	return 0;
}


