#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *x;
	int i, n;
	clrscr();

	printf("Enter number of items : ");
	scanf("%d", &n);

	x = (int *) malloc(sizeof(int) * n);

	for(i=0 ; i<n ; i++)
	{
		printf("Enter value : ");
		scanf("%d", &x[i]);
	}

	printf("\n\nValues :\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\t", x[i]);
	}

	getch();
}