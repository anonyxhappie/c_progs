#include<stdio.h>
typedef long long ll;
#define nLOOP(i, n) for(i=1; i<=n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%lld", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%lld\n", n);
#define sPRINT(s) printf("%s\n", s);
int main(){
	freopen("int.txt", "r", stdin);
	ll t, i, j, k;
	nSCAN(t)
	while(t--){
		ll n;
		nSCAN(n)
		ll a[n+1];
		nLOOP(i, n) a[i] = 0;
		nLOOP(i, n){
			for(j=1; j<=n; j+=i) a[j] = !a[j];	
			if(i>=n) break;
			i++;
			for(k=n; k>=1; k-=i) a[k] = !a[k];	
		}
		ll od=0;
		nLOOP(i, n) if(a[i]) od++;
		nPRINT(od)
	}
	return 0;
}


