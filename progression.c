<<<<<<< HEAD
#include<stdio.h>
typedef long long ll;
typedef short bool;
ll mod = 1000000007;
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%lld", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%lld\n", n);
#define sPRINT(s) printf("%s\n", s);
#define TRUE 1
#define FALSE 0
int main(){
	//freopen("int.txt", "r", stdin);
	ll t, i;
	nSCAN(t)
	while(t--){
		ll n, nextNum=-99999;
		nSCAN(n)
		ll a[n];
		nLOOP(i, n)	nSCAN(a[i])
		if((nextNum = nextNumOfAP(a)) && nextNum != -99999) {
			
		} else if((nextNum = nextNumOfAP(a)) && nextNum != -99999) {
			
		} else if(nextNum = nextNumOfAP(a)) && nextNum != -99999) {
			
		}else{
			
		}
	}
	return 0;
}

=======
#include<stdio.h>
typedef long long ll;
typedef short bool;
ll mod = 1000000007;
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%lld", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%lld\n", n);
#define sPRINT(s) printf("%s\n", s);
#define TRUE 1
#define FALSE 0
int main(){
	//freopen("int.txt", "r", stdin);
	ll t, i;
	nSCAN(t)
	while(t--){
		ll n, nextNum=-99999;
		nSCAN(n)
		ll a[n];
		nLOOP(i, n)	nSCAN(a[i])
		if((nextNum = nextNumOfAP(a)) && nextNum != -99999) {
			
		} else if((nextNum = nextNumOfAP(a)) && nextNum != -99999) {
			
		} else if(nextNum = nextNumOfAP(a)) && nextNum != -99999) {
			
		}else{
			
		}
	}
	return 0;
}

>>>>>>> 4778f4a85b90a1269bcbbf8a7e14f63890d775ce
