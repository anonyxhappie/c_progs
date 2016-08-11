#include<stdio.h>
int main(){
	int i, j, count, temp, a[10], b[10]={0}, latest[10], visit[10]={0}, sortedlatest[10], max=0;
	printf("Enter 10 values:\n");
	for(i=0; i<10;) scanf("%d", &a[i++]);
	for(i=0; i<10; i++){
		if(a[i]>0){
			for(j=i, count=0; count<a[i]; j++, count++){
				visit[j]++;
				if(j==9) j=-1;
			}
			visit[j]++;
		}if(a[i]<0){
			for(j=i, count=0; count>a[i]; j--, count--){
				visit[j]++;
				if(j==0) j=10;
			}
			visit[j]++;
		}
		if(!a[i]) b[i]=a[i]; else b[j]=a[i];
	}
	for(i=0; i<10; i++) sortedlatest[i] = latest[i] = a[i] + b[i] + visit[i];
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(sortedlatest[j] < sortedlatest[i]){
				temp = sortedlatest[j];
				sortedlatest[j] = sortedlatest[i];
				sortedlatest[i] = temp;	
			} 	
		}
		printf("a[%d]=%d\tb[%d]=%d\tVisit[%d]=%d\tLatest[%d]=%d\tSortedLatest[%d]=%d\n",i, a[i], i, b[i], i, visit[i], i, latest[i], i, sortedlatest[i]);
	}
	return 0;
}


