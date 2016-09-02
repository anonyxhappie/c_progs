#include<iostream>
bool ifseq(int n);
using namespace std;
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if(ifseq(n)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}

bool ifseq(int n){
	int z=0, o=0, r;
	while(n){
		r = n%10;
		n/=10;
		if(r) o++;
		else z++;
	}
	if(o == 1 || z == 1) return true;
	else return false;
}
