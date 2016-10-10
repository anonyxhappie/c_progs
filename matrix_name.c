#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 8
#define true 1
#define false 0
int search(int, int, int);
void seach_string();

int len = 12;
char result[N][N];
char string[] = "anonyxhappie";
char a[N][N] = {
	{'t', 'z', 'x', 'c', 'd', 'e', 'd', 'c'}, 
	{'a', 'h', 'n', 'a', 'x', 'h', 'x', 'c'}, 
	{'h', 'd', 'h', 'y', 'a', 'n', 'r', 'n'}, 
	{'o', 'n', 'n', 'r', 'n', 'p', 'p', 'n'}, 
	{'a', 'w', 'o', 'i', 'b', 'r', 'i', 'e'},
	{'c', 'f', 'b', 'u', 'l', 'e', 'o', 'i'},
	{'e', 's', 'e', 'n', 'y', 'e', 'x', 'p'},
	{'a', 'n', 'o', 'n', 'x', 'h', 'a', 'p'}
};

int main(){	
	int i,j;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			result[i][j] = '-';
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
	if(search_string()) printf("\n%s found.\n", string);
	else printf("\n%s not found.\n", string);
			
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("%c ", result[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

int search_string(){
	int i=0, j=0;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(search(i, j, 0)){ //start from 0,0 to n,n (initial point)
				return true;
			}
		}
	}
	return false;
}

int search(int r, int c, int index){
	//when no match to any index or non-zero(already occupied)
	if(result[r][c] != '-' || string[index] != a[r][c]) return false;
	// final index reached
	if(index == len - 1){
		result[r][c] = a[r][c]; //result matrix final value
		return true;
	}
	result[r][c] = a[r][c]; //result matrix increament value 
	
	if(r + 1 <  N  && 				  search(r + 1, c, index + 1))     return true; //down
	if(r - 1 >= 0  && 				  search(r - 1, c, index + 1))     return true; //up
	if(c + 1 <  N  && 				  search(r, c + 1, index + 1))     return true; //right
	if(c - 1 >= 0  && 				  search(r, c - 1, index + 1))     return true; //left
	if(r - 1 >= 0  && c + 1 <  N  &&  search(r - 1, c + 1, index + 1)) return true; //up-right
	if(r - 1 >= 0  && c - 1 >= 0  &&  search(r - 1, c - 1, index + 1)) return true; //up-left
	if(r + 1 <  N  && c - 1 >= 0  &&  search(r + 1, c - 1, index + 1)) return true; //down-left
	if(r + 1 <  N  && c + 1 <  N  &&  search(r + 1, c + 1, index + 1)) return true;	 //down-right
    
	result[r][c] = '-'; //to set the wrong path value ' '
	return false;
}

