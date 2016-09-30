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
	ll t, i, j, k;
	nSCAN(t)
	while(t--){
		ll n, count=0;
		nSCAN(n)
		nLOOP(i, n+1){
			nLOOP(j, n+1){
				if(i+j > n) break; 
				nLOOP(k, n+1){
					if(i+j+k > n) break; 
					if(i+j+k == n) count++;
				}
			}
		}
		nPRINT(count)
	}
	return 0;
}
