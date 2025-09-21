#include<stdio.h>
#include<conio.h>

void inputElements();
void bubbleSort();

int n=5;
int arr[5];

void main()
{
	int i;
	clrscr();

	inputElements();

	bubbleSort();

	printf("\n\nAfter bubble sorting : \n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\t", arr[i]);
	}

	getch();
}

void inputElements()
{
	int i;

	printf("Enter values for the array :\n\n");
	for(i=0 ; i<n ; i++)
	{
		printf("Enter value %d : ", i+1);
		scanf("%d", &arr[i]);
	}
}

void bubbleSort()
{
	int i, j, temp;

	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n-1-i ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				  temp = arr[j];
				  arr[j] = arr[j+1];
				  arr[j+1] = temp;
			}
		}
	}
}