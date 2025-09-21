#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

int n;
int *queue;
int rear=-1;
int front=-1;

void main()
{
	int choice;
	clrscr();

	printf("Enter max no. of elements : ");
	scanf("%d", &n);

	queue = (int *) malloc(sizeof(int) * n);

	while(choice)
	{
		clrscr();

		printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit");
		printf("\n=======================================\n");
		printf("\nEnter your choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1: enqueue();
					break;

			case 2: dequeue();
					break;

			case 3: display();
					break;

			case 4: exit(1);
					break;

			default: printf("Invalid Choice");
		}
		getch();
	}

	getch();
}

void enqueue()
{
	int x;

	printf("\nEnter element to enqueue : ");
	scanf("%d", &x);

	if(rear == n-1)
	{
		printf("\nThe queue is full");
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear] = x;

	}
	else
	{
		rear++;
		queue[rear] = x;
	}
}

void dequeue()
{
	if(front == -1 && rear == -1)
	{
		printf("\nThe queue is empty");
	}
	else if(front == rear)
	{
		printf("\nThe deque element is : %d", queue[front]);
		front=rear=-1;
	}
	else
	{
		printf("\nThe deque element is : %d", queue[front]);
		front++;
	}

}

void display()
{
	int i;

	printf("\n\n");
	for(i=front ; i<=rear ; i++)
	{
		printf("%d\n", queue[i]);
	}
}
