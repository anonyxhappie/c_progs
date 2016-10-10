#include<stdio.h>
int main(){
	int i=0,arr[100];
	while(scanf("%d", &arr[i]) && arr[i++]!='x');
	printf("\n%d\n", i);
	return 0;
}


/*void main()
{
	int i,j,arr[5],b[5];
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	
	
	for(j=0;j<5;j++)
	{
		for(i=0; i < arr[j]; i++)
		{
			if(i==5)
			{
				i=0;
			}
		}
		b[i]=arr[j];
	}
	for(i=0; i<5; i++) printf(" %d\n", b[i]);
}
*/






