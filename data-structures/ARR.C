#include<stdio.h>
#include<conio.h>

void inputElements();
void displayElements();

int n=10;
int arr[10];

void main()
{
	int choice;
	clrscr();

	while(1)
	{
		clrscr();
		printf("1. Input Elements\n2. Display Elements\n3. Exit");
		printf("\n\n=========================================\n");

		printf("\n\nEnter your choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1 : 	inputElements();
						break;

			case 2 :	displayElements();
						break;

			case 3 :	exit(1);

			default : 	printf("\nInvalid Choice");

		}

		getch();
	}

	getch();
}

void inputElements()
{
	int i;

	printf("\n");
	for(i=0 ; i<n ; i++)
	{
		printf("Enter value for %d : ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\nInput completed");
}

void displayElements()
{
	int i;

	printf("\n");
	for(i=0 ; i<n ; i++)
	{
		printf("\nValue %d : %d", i+1, arr[i]);
	}
}