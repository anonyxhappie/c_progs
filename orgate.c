#include<stdio.h>
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define SCAN(n) scanf("%d", &n);
#define nPRINT(n) printf("%d\n", n);
#define sPRINT(s) printf("%s\n", s);
int main(){
	freopen("int.txt", "r", stdin);
	int t, i;
	SCAN(t)
	while(t--){
		int n;
		SCAN(n)
		int a[n], flag = 0;
		nLOOP(i, n){
			SCAN(a[i])
			if(a[0] != 0 || a[0] != a[i]) flag = 1; 
		}
		if(!flag) nPRINT(0)
		else nPRINT(1)
	}
	return 0;
}

