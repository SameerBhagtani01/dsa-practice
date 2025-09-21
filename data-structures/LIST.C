#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void displayList();

struct Node{
	int data;
	struct Node *next;
};

struct Node *head, *newNode, *temp;

void main()
{
	int choice;
	head=0;

	// linked list creation
	while(choice != 2)
	{
		clrscr();
		printf("1. Create a node\n2. End");
		printf("\nEnter your choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1 : {
				  newNode = (struct Node *) malloc(sizeof(struct Node));

				  printf("Enter data for new node : ");
				  scanf("%d", &(newNode->data));

				  newNode->next=0;

				  // when list is empty
				  if(head==0)
				  {
					head=newNode;
					temp=newNode;
				  }
				  // when list is not empty
				  else
				  {
					temp->next=newNode;
					temp=newNode;
				  }
				  temp=newNode;
			}

			case 2 : break;

			default : printf("Invalid choice");
		}

		getch();
	}

	clrscr();

	// menu loop
	while(1)
	{
		clrscr();
		printf("1. Display List\n2. Exit");
		printf("\n\n=========================================\n");

		printf("\n\nEnter your choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1 : 	displayList();
						break;

			case 2 :	exit(1);

			default : 	printf("Invalid Choice");

		}

		getch();
	}

	getch();
}

void displayList()
{
	temp=head;
	while(temp->data)
	{
		printf("%d\t", temp->data);
		temp=temp->next;
	}

}