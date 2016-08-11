#include <stdio.h>
int main(){
	int i,j,limit,k,l;
	scanf("%d",&limit);
	for(i=1;i<=limit+1;i++)
	{
		for(j=1;j<=limit+2-i;j++)
		{
			printf("%d",j);
		}
		if(i==1)
		printf("\b");
		for(k=1;k<2*i-2;k++)
		{	if(i!=1)
			printf(" ");
		}
		for(l=limit+2-i;l>=1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}



}



















