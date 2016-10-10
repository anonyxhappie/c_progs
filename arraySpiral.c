#include<stdio.h>
#include<stdlib.h>
typedef int ll;
typedef short bool;
ll mod = 1000000007;
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define nLOOP(i, n) for(i=0; i<n; i++)
#define abLOOP(i, a, b) for(i=a; i<b; i++)
#define nSCAN(n) scanf("%d", &n);
#define sSCAN(s) scanf("%s", s);
#define nPRINT(n) printf("%d ", n);
#define sPRINT(s) printf("%s\n", s);
#define TRUE 1
#define FLASE 0
int* spiralOrder(const int** A, int n11, int n12, int *length_of_array);
int main(){
	//freopen("int.txt", "r", stdin);
	const int ar[][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }	};
//	const int ar[][1] = {{1}};
		
		int i, j, len, m=3, n=3;
		int * p = spiralOrder((const int **)ar, m, n, &len);
		nLOOP(i, m*n) nPRINT(p[i])
	return 0;
}

int* spiralOrder(const int** A, int n11, int n12, int *length_of_array) {
	 *length_of_array = n11 * n12;
	 int *result = (int *) malloc(*length_of_array * sizeof(int));
	 int T=0, B=n11-1, L=0, R=n12-1, dir=0, i=0, j=0;
	 while(T<=B && L<=R){
	 	if(dir==0){
	 		for(i=L; i<=R; i++) result[j++] = *(int *)(((int *)A+T*n12) + i);
	 		T++;
		 } else if(dir==1){
	 		for(i=T; i<=B; i++) result[j++] = *(int *)(((int *)A+i*n12) + R);
	 		R--;
		 } else if(dir==2){
	 		for(i=R; i>=L; i--) result[j++] = *(int *)(((int *)A+B*n12) + i);
	 		B--;
		 } else if(dir==3){
	 		for(i=B; i>=T; i--) result[j++] = *(int *)(((int *)A+i*n12) + L);
	 		L++;
		 }
		 dir = (dir+1)%4;
	 }	 
	 return result;
}




