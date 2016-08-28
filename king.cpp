#include<iostream>
void getKingIndex(char * CB, int R, int C, int * pKx, int * pKy);
bool playBurnedChess(char * CB, int R, int C, int i, int j, bool flag);
using namespace std;
int main(){
	freopen("int.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int t, x=0;
	cin >> t;
	while(x++<t){
		int i, j, R, C; 
		bool flag = true; //true Alice , false Bob
		cin >> R >> C;
		char CB[R][C];
		for(i=0; i<R; i++) for(j=0; j<C; j++) cin >> CB[i][j];
		//for(i=0; i<R; i++){ for(j=0; j<C; j++) cout << CB[i][j]; cout << endl; }	
		int Kx, Ky;
		getKingIndex(* CB, R, C, &Kx, &Ky);
		flag = playBurnedChess(* CB, R, C, Kx, Ky, flag);
		//cout << flag << endl;
		if(flag) cout << "Alice\n";
		else cout << "Bob\n";
	}
	return 0;
}

bool playBurnedChess(char * CB, int R, int C, int i, int j, bool flag){
	if(*(CB + R * i + j) == '#') return flag;
	
	if((i+1) < C && *(CB + R * (i+1) + j) == '.'){ *(CB + R * i + j) = '#'; flag = playBurnedChess(CB, R, C, i+1, j, !flag); }
	if((j+1) < R && *(CB + R * i + (j+1)) == '.'){ *(CB + R * i + j) = '#'; flag = playBurnedChess(CB, R, C, i, j+1, !flag); }
	if((i-1) >= 0 && *(CB + R * (i-1) + j) == '.'){ *(CB + R * i + j) = '#'; flag = playBurnedChess(CB, R, C, i-1, j, !flag); }
	if((j-1) >= 0 && *(CB + R * i + (j-1)) == '.'){ *(CB + R * i + j) = '#'; flag = playBurnedChess(CB, R, C, i, j-1, !flag); }
	
	if((i+1) < C && (j+1) < R && *(CB + R * (i+1) + (j+1)) == '.'){ *(CB + R * i + j) = '#'; flag = playBurnedChess(CB, R, C, i+1, j+1, !flag); }
	if((i+1) < C && (j-1) >= 0 && *(CB + R * (i+1) + (j-1)) == '.'){ *(CB + R * i + j) = '#'; flag = playBurnedChess(CB, R, C, i+1, j-1, !flag); }
	if((i-1) >= 0 && (j+1) < R && *(CB + R * (i-1) + (j+1)) == '.'){ *(CB + R * i + j) = '#'; flag = playBurnedChess(CB, R, C, i-1, j+1, !flag); }
	if((i-1) >= 0 && (j-1) >= 0 && *(CB + R * (i-1) + (j-1)) == '.'){ *(CB + R * i + j) = '#'; flag = playBurnedChess(CB, R, C, i-1, j-1, !flag); }
	
	return flag; 
}

void getKingIndex(char * CB, int R, int C, int * pKx, int * pKy){
int i, j, bflag = 0;
	for(i=0; i<R; i++){ 
		for(j=0; j<C; j++){
			if(*(CB+ i*R + j) == 'K'){
				*pKx = i; *pKy = j;
				bflag = 1;
				break;
			}		
		}
		if(bflag) break;
	}
}


