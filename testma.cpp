#include<iostream>
using namespace std;
void getKingIndex(char ** CB, int R, int C, int * pKx, int * pKy);
int main(){
	freopen("int.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int R, C; 
	bool flag = true; //true Alice , false Bob
	cin >> R >> C;
	char CB[R][C];
	for(int i=0; i<R; i++) for(int j=0; j<C; j++) cin >> CB[i][j];
	//for(int i=0; i<R; i++){ for(int j=0; j<C; j++) cout << CB[i][j]; cout << endl; }	
	int Kx, Ky;
	getKingIndex((char **)CB, R, C, &Kx, &Ky);
	//cout << Kx << " " << Ky << endl;	
	return 0;
}

void getKingIndex(char ** CB, int R, int C, int * pKx, int * pKy){
	for(int i=0; i<R; i++){ 
		for(int j=0; j<C; j++){
			cout << CB[i][j];//*((CB + i*R) + j);
		}
		cout << endl;
	}
}


