#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void push();
void pop();
void peek();
void display();
void isEmpty();
void isFull();

int n;
int *stack;
int top=-1;

void main()
{
	int choice;
	clrscr();

	printf("Enter max no. of elements : ");
	scanf("%d", &n);

	stack = (int *) malloc(sizeof(int) * n);

	while(choice)
	{
		clrscr();

		printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Is Empty ?\n6. Is Full ?\n7. Exit");
		printf("\n=======================================\n");
		printf("\nEnter your choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1: push();
					break;

			case 2: pop();
					break;

			case 3: peek();
					break;

			case 4: display();
					break;

			case 5: isEmpty();
					break;

			case 6: isFull();
					break;

			case 7: exit(1);

			default: printf("\nInvalid Choice");
		}
		getch();
	}
	getch();
}

void push()
{
	int x;

	if(top == n-1)
	{
		printf("\nStack overflow");
	}
	else
	{
		printf("\nEnter element to push : ");
		scanf("%d", &x);

		stack[top+1] = x;
		top++;
	}
}

void pop()
{
	int poppedElement;
	if(top == -1)
	{
		printf("\nStack Underflow");
	}
	else
	{
		poppedElement = stack[top];
		top--;
		printf("\nPopped Element : %d", poppedElement);
	}
}

void peek()
{
	if(top == -1)
	{
		printf("\nStack is Empty");
	}
	else
	{
		printf("\nTopmost Element : %d", stack[top]);
	}
}

void display()
{
	int i;

	printf("\n\n");
	for(i=top ; i>=0 ; i--)
	{
		printf("%d\n", stack[i]);
	}
}

void isEmpty()
{
	if(top == -1)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\nStack is NOT empty");
	}
}

void isFull()
{
	if(top == n-1)
	{
		printf("\nStack is full");
	}
	else
	{
		printf("\nStack is NOT full");
	}
}