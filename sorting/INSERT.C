#include<stdio.h>
#include<conio.h>

void inputElements();
void insertionSort();

int n=5;
int arr[5];

void main()
{
	int i;
	clrscr();

	inputElements();

	insertionSort();

	printf("\n\nAfter insertion sorting : \n");
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

void insertionSort()
{
	int i, j, temp;

	for(i=1 ; i<n ; i++)
	{
		temp = arr[i];
		j=i-1;

		while(j>=0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}