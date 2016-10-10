#include<iostream>
using namespace std;
int main(){
	freopen("int.txt", "r", stdin);
	int i = 0, n, k, count = 0, num;
	cin >> n >> k;
	while(i++ < n){
		cin >> num;
		if(num%k==0) count++;	
	}
	cout << count << endl;
	return 0;
}
