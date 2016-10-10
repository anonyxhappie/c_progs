#include <stdio.h>

void main()
{
	int contact[5], i, j;
	printf("\nEnter 5 numbers:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &contact[i]);
		for(j=0; j<i; j++)
		{
			if(contact[i] == contact[j])
			{
			      printf("\n%d already exist in contact list.\n");
			      printf("Enter again:\n");
			      i--;
			      break;
			}
		}
	}
	for(i = 0; i < 5; i++){
		printf("%d ", contact[i]);
	}
	
}

/*
void main()
{
	int arr[10], temp, i;
	printf("Enter 10 numbers.\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	temp = arr[9];
	for(i=8; i>=0; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[0] = temp;
	for(i=0; i<10; i++)
	{
		printf("%d", arr[i]);
	}
}
*/

