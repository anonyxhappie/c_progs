#include<stdio.h>
#include<math.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
typedef long long ll;
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<=b; i++)
#define nSCAN(n) scanf("%lld", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%lld ", n);
#define sPRINT(s) printf("%s\n", s);
#define TRUE 1
#define FALSE 0
ll lpd(ll n);
void update(ll * a, ll l, ll r);
ll gget(ll * a, ll l, ll r);
ll isPrime(ll n);
int main(){
	//freopen("int.txt", "r", stdin);
	ll t, i;
	nSCAN(t)
	while(t--){
		ll n, m, type, l, r;
		scanf("%lld %lld", &n, &m);
		ll a[n+1], res[m+1], j=1;
		abLOOP(i, 1, n) nSCAN(a[i])
		abLOOP(i, 1, m){
			scanf("%lld %lld %lld", &type, &l, &r);	
			if(type == 1) nPRINT(gget(a, l, r))
			else if(type == 0) update(a, l, r);
		}
		sPRINT("")
	}
	return 0;
}	

ll lpd(ll n){
	ll i;
	abLOOP(i, 2, n) if(n%i==0) if(isPrime(i)) return i;
	return 1;
}

void update(ll * a, ll l, ll r){
	ll i;
	abLOOP(i, l, r) a[i]/=lpd(a[i]);
}

ll gget(ll * a, ll l, ll r){
	ll i, result = 1;
	abLOOP(i, l, r) result = MAX(result, lpd(a[i]));	
	return result;
}

ll isPrime(ll n){
	ll i;
	abLOOP(i, 2, sqrt(n-1)) if(n%i==0) return FALSE;
	return TRUE;
}



