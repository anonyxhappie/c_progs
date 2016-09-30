#include<iostream>
#include<math.h>
using namespace std;
int amin(int *a, int index, int n);
int main(){
/*	freopen("B-small-attempt0.in", "r", stdin);
	freopen("out.txt", "w", stdout);
	int x = 0, t;
	cin >> t;
	while(x++ < t){
		int i, j, a, b, n, k, count = 0;
		cout << "Case #" << x << ": ";
		cin >> a >> b >> n >> k;
		for(i=1; i<=n; i++){
			for(j=1; j<=n; j++){
				if(i==j) continue;
				if(((long long)pow(i, a) + (long long)pow(j, b)) % k == 0) count++;
			}
		}
		cout << count << endl;
	}	*/
	int a[6] = {9, 3, 5, 2, 8, 1};	
	cout << amin(a, 3, 5);
	return 0;
}

int amin(int *a, int index, int n){
	int m = a[1], i;
	for(i=1; i<=n; i++){
		if(i == index) continue;
		if(m > a[i]) m = a[i];
	}
	return m;
}

