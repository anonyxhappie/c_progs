#include<conio.h>
#include<stdio.h>
void main()
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







