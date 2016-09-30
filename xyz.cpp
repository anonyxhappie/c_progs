#include<iostream>
using namespace std;
int fact(int n);
int main(){
	cout <<fact(6);
	return 9;
}

int fact(int n){
	if(n==1) return 1;
	return n*fact(n-1);
}
	



