#include<iostream>
void getKingIndex(char * CB, int R, int C, int * pKx, int * pKy);
bool playBurnedChess(char * CB, int R, int C, int i, int j, bool flag);
int R, C;
char CB[100][100];
int t, x=0;
using namespace std;
int main(){
	freopen("int.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	cin >> t;
	while(x++<t){ 
		bool flag = true; //true Alice , false Bob
		cin >> R >> C;
		for(i=0; i<R; i++) for(j=0; j<C; j++) cin >> CB[i][j];
		//for(i=0; i<R; i++){ for(j=0; j<C; j++) cout << CB[i][j]; cout << endl; }	
		int Kx, Ky;
		getKingIndex(&Kx, &Ky);
		//flag = playBurnedChess(* CB, R, C, Kx, Ky, flag);
		//cout << Kx << " " << Ky << endl;
		//cout << flag << endl;
		//if(flag) cout << "Alice\n";
		//else cout << "Bob\n";
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

void getKingIndex(int * pKx, int * pKy){
bool bflag = false;
	for(int i=0; i<R; i++){ 
		for(int j=0; j<C; j++){
			if(*(CB+ i*R + j) == 'K'){
				*pKx = i; *pKy = j;
				bflag = !bflag;
				break;
			}		
		}
		if(bflag) break;
	}
}


