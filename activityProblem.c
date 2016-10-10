#include<stdio.h>
typedef long long ll;
typedef short bool;
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%lld", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%lld ", n);
#define sPRINT(s) printf("%s\n", s);
#define TRUE 1
#define FALSE 0
ll maxActs(ll s[], ll f[], ll n);
int main(){
	ll i;
	//freopen("int.txt", "r", stdin);
 	ll s[] =  {7, 0, 4, 8, 4, 5};
    ll f[] =  {9, 10, 5, 9, 10, 7};
 //	ll s[] =  {4, 5, 7, 8, 0, 4};
 // ll f[] =  {5, 7, 9, 9, 10, 10};
    ll n = sizeof(s)/sizeof(s[0]);
   	sort(s, f, n); 
    nPRINT(maxActs(s, f, n))
    return 0;
}

ll maxActs(ll s[], ll f[], ll n){
    ll i = 0, j, count=1;
    abLOOP(j, 1, n) 
		if (s[j] >= f[i]){
    		i = j;
			count++;	
		}
	return count; 
}

void sort(ll s[], ll f[], ll n){
	int i, j;
	abLOOP(i, 0, n-1){
		abLOOP(j, i+1, n){
			if(f[j] < f[i]){
				swap(&f[j], &f[i], sizeof(f[i]));
				swap(&s[j], &s[i], sizeof(s[i]));
			}else if(f[i] == f[j] && s[j] < s[i]){
				swap(&f[j], &f[i], sizeof(f[i]));
				swap(&s[j], &s[i], sizeof(s[i]));
			}
		}
	}
}

void swap(void * vp1, void * vp2, size_t size){
	char buffer[size];
	memcpy(buffer, vp1, size);
	memcpy(vp1, vp2, size);
	memcpy(vp2, buffer, size);
}



