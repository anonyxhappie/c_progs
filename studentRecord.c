#include<stdio.h>
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%d", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%d\n", n);
#define sPRINT(s) printf("%s\n", s);
typedef struct student{
	char name[100];
	int marks[3];
	int avg;
}sT;
int main(){
	freopen("int.txt", "r", stdin);
	int t, i;
	nSCAN(t)
	while(t--){
		int n, max = 0, index = 0;
		nSCAN(n)
		sT s[n];
		nLOOP(i, n){
			sSCAN(s[i].name)
			nSCAN(s[i].marks[0])
			nSCAN(s[i].marks[1])
			nSCAN(s[i].marks[2])
			if((s[i].avg = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2])/3) > max) max = s[(index = i)].avg;
		}
		printf("%s %d\n", s[index].name, s[index].avg);
	}
	return 0;
}


