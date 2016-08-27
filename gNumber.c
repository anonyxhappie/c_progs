#include<stdio.h>
int main(){
	int x=0, t, n, flag, index; 
	freopen("int.txt", "r", stdin);
//	freopen("out.txt", "w", stdout);
	scanf("%d", &t);
	while(x++<t){
		flag = 0; //flag 0 for Laurence and 1 for Seymour
		scanf("%d", &n);
		printf("Case #%d: ", x);
		while(!isgNumber(n)){
			index = isPrime(n);
			while(n%index == 0) n/=index;
			flag = !flag;
		}
		if(!flag) printf("Seymour\n");
		else printf("Laurence\n");
	}
	return 0;
}

int isPrime(int num){
	int i;
	if(num == 1) return 0;
	for(i=2; i<num; i++)
		if(num%i == 0)
			return i;
	return 0; //return 0 when prime
}

int isgNumber(int n){
	int i, sum=0;
	while(n){
		sum += n%10;
		n/=10;
	}
	if(isPrime(sum) == 0) return 1;
	else return 0;	
}




