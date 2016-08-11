//WAP multiply 2 numbers
#include<stdio.h>

int main(){
	//variable declaration
	long long int a, b;
	long long int bdigits[1000], adigits[1000], temp=0, i, j, k, l, x, z, n,
	alength, blength, sum[100][1000], result[1000], rtp, r2[2];
	long long int ttemp;
	scanf("%lld %lld", &a, &b);
	//numtoDigits
	i=0; temp = a;
	while(temp){
		adigits[i++] = temp%10;
		temp/=10;
	}
	alength = i; i=0; temp = b;
	while(temp){
		bdigits[i++] = temp%10;
		temp/=10;
	}
	blength=i;
	//reverse
	for(i=0; i<alength/2; i++){
		temp = adigits[i];
		adigits[i] = adigits[alength-i-1];
		adigits[alength-i-1] = temp;
	}
	for(i=0; i<blength/2; i++){
		temp = bdigits[i];
		bdigits[i] = bdigits[blength-i-1];
		bdigits[blength-i-1] = temp;
	}
	//middle
	
	k=0, n = alength*blength;
	for(i=blength-1; i>=0; i--, k++){
		//initializing x to 0
		l=0;
		for(z=0; z<k; z++){
			sum[k][l++]=0;
		}
		rtp=0;
		for(j=alength-1; j>=0; j--){
			(temp = bdigits[i]*adigits[j]+rtp);
			//printf("%d\n", temp);
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
				x=0;
				while(temp){
					r2[x++] = temp%10;
					temp/=10;
				}
				sum[k][l++] = r2[0];
				rtp = r2[1];
			}
		}
		//l--;
		for(;z<n; z++){
			sum[k][l++]=0;
		}
		
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
			x=0;
			while(temp){
				r2[x++] = temp%10;
				temp/=10;
			}
			result[z--] = r2[0];
			rtp = r2[1];
		}
	}
	/*
	for(i=0; i<alength; i++){
		printf("%d ", adigits[i]);
	}
	printf("\n\n");
	for(i=0; i<blength; i++){
		printf("%d ", bdigits[i]);
	}
	printf("\n\n");
	*/
	/*for(i=0; i<blength; i++){
		for(j=0; j<10; j++){
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	for(j=0; j<10; j++){
		printf("%d ", result[j]);
	}	
	*/
	i=0;
	while(!result[i++]) continue;
	z=0, i--;
	ttemp=0;
	while(i<n) ttemp=ttemp*10+result[i++];

	printf("%lld\n", ttemp);
	return 0;
}

/*
	23
   x31
  --
  ----
    23
   69x
  ------
   713
   
   */
