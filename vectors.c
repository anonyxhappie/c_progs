#include<stdio.h>
#define nLOOP(i, n) for(i=0; i<n; i++)
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
		int a[3], b[3], c[3], adb=0, acb=0, as=0;
		nLOOP(i, 3) nSCAN(a[i])
		nLOOP(i, 3) nSCAN(b[i])
		nLOOP(i, 3) adb += a[i] * b[i];
		acb = 
		(c[0] = (a[1]*b[2] - a[2]*b[1])) - 
		(c[1] = (a[0]*b[2] - a[2]*b[0])) + 
		(c[2] = (a[1]*b[0] - a[0]*b[1]));
		as = c[0]*c[0] + c[1]*c[1] + c[2]*c[2];
		if(!as) nPRINT(1)
		else if(!adb) nPRINT(2)
		else nPRINT(0)
	}
	return 0;
}


