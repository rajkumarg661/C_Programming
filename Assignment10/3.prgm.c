#include<stdio.h>
#include<conio.h>
void even_no(int);
int main()
{
	even_no(10);
	getch();
}
void even_no(int n)
{
	if(n>0)
	{
			even_no(n-1);
			printf("\n%d",2*n);
	}
}

