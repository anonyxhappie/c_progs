#include<iostream>
#include<math.h>
using namespace std;
int amax(int *a, int index, int n);
int amin(int *a, int index, int n);
int main(){
	freopen("int.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int z = 0, t;
	cin >> t;
	while(z++ < t){
		int i, j, L1, R1, A, B, C1, C2, N, M;
		cout << "Case #" << z << ": ";
		cin >> N >> L1 >> R1 >> A >> B >> C1 >> C2 >> M;
		int x[N+1], y[N+1], L[N+1], R[N+1];
		L[1] = x[1] = L1, R[1] =  y[1] = R1;
		for(i=2; i<=N; i++){
			x[i] = (A * x[i-1] + B * y[i-1] + C1)%M;
			y[i] = (A * y[i-1] + B * x[i-1] + C2)%M;
			L[i] = min(x[i], y[i]);
			R[i] = max(x[i], y[i]);
		}
		int RS[N+1];
		int rmin = 0;
		for(i=1; i<=N; i++){
			RS[i] = amax(R, i, N) - amin(L, i, N);
			if(rmin > RS[i]) rmin = RS[i];
		//	cout << "\namax = " << amax(R, i, N) << "\namin = " << amin(L, i, N);
			cout << RS[i];
		}
		//cout << rmin << endl;
	/*	int RS[N+1], minn, maxx, k, p = 0;
		for(k=1; k<=N; k++){
			for(i=1; i<=N; i++){
				if(k==i) continue;
				minn = L[i], maxx = R[i];
				for(j=1; j<=N; j++){
					if(k==j) continue;
					if(L[i] > L[j]) minn = L[j];
					if(R[i] < R[j]) maxx = R[j]; 	
				}
				if(N==1) RS[p++] = 0; else RS[p++] = maxx - minn;
				break;	
			}	
			break;
		}
		for(i = 0; i<p; i++) cout << RS[i] << "\n"; */
	}	
	return 0;
}

int min(int a, int b){
	if(a>b) return b;
	else return a;
}

int max(int a, int b){
	if(a<b) return b;
	else return a;
}

int amin(int *a, int index, int n){
	int m = a[1], i;
	for(i=1; i<=n; i++){
		if(i == index) continue;
		if(m > a[i]) m = a[i];
	}
	return m;
}


int amax(int *a, int index, int n){
	int m = a[1], i;
	for(i=1; i<=n; i++){
		if(i == index) continue;
		if(m < a[i]) m = a[i];
	}
	return m;
}

