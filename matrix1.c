#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
#define N 5
int path = 1;
int main(){
	const int n = N;
	int a[N][N]={
		{1, 1, 0, 0, 1}, 
		{1, 0, 0, 0, 0},
		{0, 1, 0, 9, 0},
		{0, 1, 1, 1, 1},
		{1, 0, 1, 0, 1}  
	}, s[N][N];
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			s[i][j] = 0;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	if(f(a, 0, 0, n, s)) printf("\nTrue.\n");
	else printf("\nFalse.\n");
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int valid_node(int r, int c, int n){
	if(r < n && c < n && r >= 0 && c >= 0) return true;
	return false;
}

int f(int a[][N], int r, int c, int n, int s[][N]){
	if(a[r][c]==0){
		return false;
	}
	if(a[r][c]==9){
		s[r][c] = path++;
		printf("\n\na[%d][%d]\n\n", r, c);
		return 1;	
	} 
	if(valid_node(r, c, n)){
		s[r][c] = path++;
		if(f(a, r+1, c, n, s)) return 1;	
		if(f(a, r, c+1, n, s)) return 1;
		//if(f(a, r-1, c, n, s)) return 1;
		//if(f(a, r, c-1, n, s)) return 1;
		if(f(a, r+1, c+1, n, s)) return 1;	
		if(f(a, r-1, c+1, n, s)) return 1;
		//if(f(a, r+1, c-1, n, s)) return 1;	
		//if(f(a, r-1, c-1, n, s)) return 1;
		s[r][c] = 0;
		path--;
	}
	return 0;
}

