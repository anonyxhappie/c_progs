#include<stdio.h>
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%d", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%d\n", n);
#define sPRINT(s) printf("%s\n", s);
int main(){
	freopen("int.txt", "r", stdin);
	int t, i, j;
	nSCAN(t)
	while(t--){
		int n, max = 0, v;
		nSCAN(n)
		int a[n];
		nLOOP(i, n) nSCAN(a[i])
		nLOOP(i, n-1){
			abLOOP(j, i, n){
				if(i == j) continue;
				v = abs((a[i] - i) - (a[j] - j));
				if(max < v) max = v;
			}
		}
		nPRINT(max);
	}
	return 0;
}


