#include<stdio.h>
#include<conio.h>

void inputElements();
void selectionSort();

int n=5;
int arr[5];

void main()
{
	int i;
	clrscr();

	inputElements();

	selectionSort();

	printf("\n\nAfter selection sorting : \n");
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

void selectionSort()
{
	int i, j, min, temp;

	for(i=0 ; i<n ; i++)
	{
		min=i;
		for(j=i+1 ; j<n ; j++)
		{
			if(arr[j] < arr[min])
			{
				min=j;
			}
		}

		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}
