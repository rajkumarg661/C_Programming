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
			printf("\n%d",2*n);
			even_no(n-1);
	}
}


