#include<stdio.h>

int main(){
	int x=0, t, i, j, k, l, z, c, nP, nE, nT; //gears on the pedals, extra, and tire gear
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	scanf("%d", &t);
	while(x++<t){
		scanf("%d %d %d", &nP, &nE, &nT);
		int tnPa[nP], tnEa[nE], tnTa[nT], m; //teeth on the different gears on the pedals, extra, and tire gear groups, respectively
		for(i=0; i<nP; i++) scanf("%d", &tnPa[i]);
		for(i=0; i<nE; i++) scanf("%d", &tnEa[i]);
		for(i=0; i<nT; i++) scanf("%d", &tnTa[i]);
		scanf("%d", &m);
		int a, b; float c, fa, fb;
		printf("Case #%d:\n", x);
		for(z=0; z<m; z++){
			scanf("%d %d", &a, &b);
			c = (float)a/b;
			int flag = 0;
			for(i=0; i<nP; i++){
				for(j=0; j<nE; j++){
					fa = (float)tnPa[i]/tnEa[j];
					for(k=0; k<nE; k++){
						if(j == k) continue; //same gear in the extra gear group, which is not allowed
						for(l=0; l<nT; l++){
							fb = (float)tnEa[k]/tnTa[l];
							if(fa*fb == c){
								flag = 1;
								break;
							}
						}
						if(flag) break;
					}
					if(flag) break;
				}
				if(flag) break;
			}
			if(flag)
				printf("YES\n"); 
			else
				printf("NO\n");
		}
	}
	return 0;
}
/*
Input		Output
1			Case #1:
1 2 3		No
5			Yes
4 6
3 5 7
2
1 1
5 2
*/

