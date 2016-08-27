#include<stdio.h>

int main(){
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int t, x=0;
	scanf("%d", &t);
	while(x++<t){
		int c, i, j, n, flag = 0;
		scanf("%d", &c);
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++) scanf("%d", &a[i]);	
		for(i=0; i<n-1; i++){
			for(j=i+1; j<n; j++){
				if((a[i]+a[j]) == c){
					printf("Case #%d: %d %d\n", x, i+1, j+1);
					flag = 1;
					break;
				}
			}
			if(flag == 1) break;
		}
	}
	return -1;
}

/*
int t, x=0, *i;
i = &x;
scanf("%d", i);
{
	*i = 9;
}
printf("%d\n", x);
*/
