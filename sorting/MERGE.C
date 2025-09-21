#include<stdio.h>
#include<conio.h>

void inputElements();
void mergeSort(int beg, int end);
void merge(int beg, int mid, int end);

int n=5;
int arr[5];

void main()
{
	int i;
	clrscr();

	inputElements();

	mergeSort(0, n-1);

	printf("\n\nAfter merge sorting : \n");
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

void mergeSort(int beg, int end)
{
	int mid;

	if(beg < end)
	{
		mid = (beg+end)/2;
		mergeSort(beg, mid);
		mergeSort(mid+1, end);
		merge(beg, mid, end);
	}
}

void merge(int beg, int mid, int end)
{
	int i=beg, j=mid+1, k, index=beg;

	int temp[5];

	while(i<=mid && j<=end)
	{
		if(arr[i] < arr[j])
		{
			temp[index] = arr[i];
			i++;
		}
		else
		{
			temp[index] = arr[j];
			j++;
		}
		index++;
	}

	if(i>mid)
	{
		while(j<=end)
		{
			temp[index] = arr[j];
			index++;
			j++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index] = arr[i];
			index++;
			i++;
		}
	}

	k=beg;

	while(k < index)
	{
		arr[k] = temp[k];
		k++;
	}
}