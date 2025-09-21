#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5];
	int i;
	int toFind;
	int foundIdx=-1;

	clrscr();

	printf("Enter values for the array :\n\n");
	for(i=0 ; i<5 ; i++)
	{
		printf("Enter value %d : ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\n\nEnter value to search for : ");
	scanf("%d", &toFind);

	for(i=0 ; i<5 ; i++)
	{
		if(arr[i] == toFind)
		{
			foundIdx=i;
		}
	}

	if(foundIdx == -1)
	{
		printf("\n\nValue does not exist in the array.");
	}
	else
	{
		printf("\n\nValue found at index : %d", foundIdx);
	}

	getch();
}