#include<stdio.h>
typedef long long ll;
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%lld", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%lld\n", n);
#define sPRINT(s) printf("%s\n", s);
#define TRUE 1
#define FALSE 0
int main(){
	freopen("int.txt", "r", stdin);
	ll t, i;
	nSCAN(t)
	while(t--){
		ll n;
		nSCAN(n)
		nPRINT(rec(n+1, n+1, n+1, n+1, 0))
	}
	return 0;
}

int rec(int a, int b, int c, int n, int cnt){
	if(a<=0 || b<=0 || c<=0) return cnt;
	if(a+b+c==n) return cnt++;
	cnt = rec(a-1, b, c, n, cnt);
	cnt = rec(a, b-1, c, n, cnt);
	cnt = rec(a, b, c-1, n, cnt);
	return cnt;
}
	
