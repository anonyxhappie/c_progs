#include<iostream>
using namespace std;
int main(){
	int arr[5];
	arr[3] = 128;
	
	((short *)arr)[6] = 2;
	for(int i=0; i<5;i++) cout << arr[i] << endl;
	
	((short *)(((char *)(&arr[1]))+1))[1]= 100;
	
	
	for(int i=0; i<5;i++) cout << arr[i] << endl;
	
	return 0;
}

