#include<stdio.h>
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%d", &n);
#define abSCAN(a, b) scanf("%d %d", &a, &b);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%d\n", n);
#define sPRINT(s) printf("%s\n", s);
int main(){
	freopen("int.txt", "r", stdin);
	int t, i;
	nSCAN(t)
	while(t--){
		int a, b;
		abSCAN(a, b)
		nPRINT((a-b)%12)
	}
	return 0;
}


