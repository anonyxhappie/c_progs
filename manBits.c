void showBits(int n);
int isPowerOf2(int n);
void highLowCount(int n, int *h, int *l);
struct nib{
	unsigned int x:1;
	unsigned int a:4;
}l;
main(){
	int c=0,b=5, high=0, low=0;
	struct nib p[4]; 
	int i=0;
	showBits(b);
	if(isPowerOf2(b)) printf("%d is perfect power of 2.\n", b);
	else printf("%d is not perfect power of 2.\n", b);
	highLowCount(b, &high, &low);
	printf("[High : %d, Low : %d]\n", high, low);
	do{
		p[i].a=b;
		p[i].a^=15;
		b>>=4; i++;		
	}while(i<4);
	for(i=3; i>=0; i--){
		c|=p[i].a;
		if(i) c<<=4;
	}
	showBits(c);
	//printf("%d\n", c);
	high=low=0;
	highLowCount(c, &high, &low);
	printf("[High : %d, Low : %d]\n", high, low);
	b=5;
	printf("%d %d\n", b, c);
	b^=c^=b^=c;
	printf("%d %d\n", b, c);
	showBits(b);
	showBits(c);
	printf("Program Terminating...");
}

void showBits(int n){
	int i;
	for(i=0; i<16; i++){
		printf("%d ", l.x=n);
		n>>=1;	
	}
	printf("\n");
}

int isPowerOf2(int n){
	int i, count=0;
	for(i=0; i<16; i++){
		if(count > 1) return 0;
		if((l.x=n)==1) count++;
		n>>=1;	
	}
	return 1;
}

void highLowCount(int n, int *high, int *low){
	int i;
	for(i=0; i<16; i++){
		if((l.x=n)==1) (*high)++; 
		else (*low)++;
		n>>=1;	
	}
}







