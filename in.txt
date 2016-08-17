/** Multiplying Numbers
* 	Input Two numbers
*/
#include<stdio.h>
unsigned long long * num_to_digits(unsigned long long int);
unsigned long long int numlen(unsigned long long int);
int main(){
	//variable declaration
	unsigned long long int a, b, * adigits, * bdigits, temp=0, i, j, k, l, x, z, n,
	alength, blength, sum[100][1000], result[1000], rtp, * r2;
	scanf("%lld %lld", &a, &b);
	unsigned long long int ttemp;
	//length and numtoDigits
	alength = numlen(a);
	blength = numlen(b);
	adigits = num_to_digits(a);
	bdigits = num_to_digits(b);
	printf("alen = %d\nblen = %d\n", alength, blength);
	for(i=0; i<alength; i++) printf("%d ", adigits[i]);printf("\n");
	for(i=0; i<alength; i++) printf("%d ", bdigits[i]);printf("\n");
	//middle
	k=0, n = alength*blength;
	for(i=blength-1; i>=0; i--, k++){
		l=0;
		for(z=0; z<k; z++) sum[k][l++]=0;
		rtp=0;
		for(j=alength-1; j>=0; j--){
			
			temp = bdigits[i] * adigits[j] + rtp;
			
			if(!j && (temp > 9)){
				x=0;
				while(temp){
					sum[k][l++] = temp%10;
					temp/=10;
				}
				break;
			}
			if(j && (temp<10)){
				sum[k][l++] = temp;
				rtp=0;
			}else{
				r2 = num_to_digits(temp);
				sum[k][l++] = r2[1];
				rtp = r2[0];
			}
		}
		for(;z<n; z++) sum[k][l++]=0;
		for(z=0; z<n/2; z++){
			temp = sum[k][z];
			sum[k][z] = sum[k][n-1-z];
			sum[k][n-1-z] = temp;
		}
	}
	
	z=n-1, rtp=0;
	for(i=n-1; i>=0; i--){
		temp=0;
		for(j=0; j<blength; j++){
			temp+=sum[j][i]+rtp;
			rtp=0;
		}
		if(!i && (temp > 9)){
			x=0;
			while(temp){
				result[z--] = temp%10;
				temp/=10;
			}
			break;
		}
		if((temp<10)){
			result[z--] = temp;
			rtp=0;
		}else{
			r2 = num_to_digits(temp);
			result[z--] = r2[1];
			rtp = r2[0];
		}
	}
	i=0;
	while(!result[i++]) continue;
	i--, ttemp=0;
	while(i<n){
		printf("%d", result[i]);
		ttemp=ttemp*10+result[i++];	
	} 
	printf("\n\n");
	printf("%lld\n%d", ttemp, numlen(ttemp));
	
	return 0;
}

unsigned long long int * num_to_digits(unsigned long long int fnum){
	unsigned long long int a[1000], i=numlen(fnum)-1;
	while(fnum){
		a[i--] = fnum%10;
		fnum/=10;
	}
	return a;
}

unsigned long long int numlen(unsigned long long int fnum){
	unsigned long long int i=1;
	while((fnum=fnum/10)) i++;
	return i;
}
/*
	23
   x31
  ------
    23
   69x
  ------
   713

   */
