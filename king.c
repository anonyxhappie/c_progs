#include<stdio.h>

int main(){
	freopen("int.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int t, x=0;
	scanf("%d", &t);
	while(x++<t){
		int i, j, R, C;
		scanf("%d %d", &R, &C);
		char CB[R][C];
		for(i=0; i<R; i++){
			for(j=0; j<C; j++){
				scanf("%c", &CB[i][j]);
			}
		}	
		for(i=0; i<R; i++){
			for(j=0; j<C; j++){
				printf("%c", CB[i][j]);
			}
			printf("\n");
		}	
	}
	return 0;
}

