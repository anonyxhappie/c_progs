#include<stdio.h>
int main(){
	freopen("int.txt", "r", stdin);
	int t;
	scanf("%d", &t);
	while(t--){
		int n, j, k, c, l, tie = 0, index = 0, max = 0;
		scanf("%d", &n);
		int r[n];
		for(j = 0; j < n; j++){
			scanf("%d", &c);
			r[j] = c;
			int type[c], count = 0, ap = 0;
			for(k = 0; k < c; k++){
				scanf("%d", &type[k]);
				for(l = 0; l<k; l++) if(type[k] == type[l]) break;
				if(l == k) count++;
			}
			if(count == 6) ap = 4;
			else if(count == 5) ap = 2;
			else if(count == 4) ap = 1;
			r[j] += ap;
			if(j>0 && r[0] == r[j]) tie = 1; 
			if(max < r[j]) max = r[index = j];
		}
		if(tie) printf("tie\n");
		else if(max == r[0]) printf("chef\n");
		else printf("%d\n", index+1);	
	}
	return 0;
}

