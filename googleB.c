#include<stdio.h>
#include<math.h>
int main(){
	freopen("int.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int x=0, t;
	scanf("%d", &t);
	while(x++<t){
		int i, j, a, b, n, k, count = 0;
		printf("Case #%d: ", x);
		scanf("%ld %ld %ld %ld", &a, &b, &n, &k);
		for(i=1; i<=n; i++){
			for(j=1; j<=n; j++){
				if(i==j) continue;
				if((long)(pow(i, a)+pow(j, b))%k==0) count++;
			}
		}
		printf("%ld\n", count);
	}	
	return 0;
}
