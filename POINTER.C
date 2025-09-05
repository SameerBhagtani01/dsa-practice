#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 5;
	int *ptr = &a;
	clrscr();

	printf("Value of a : %d", a);
	printf("\nAddress of a : %p", ptr);

	printf("\nValue at ptr : %d", *ptr);

	getch();
}