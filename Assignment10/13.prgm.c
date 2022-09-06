#include<stdio.h>
#include<conio.h>
void dec_bi(int);
int main()
{
	dec_bi(16);
	getch();
}
void dec_bi(int n)
{
	if(n>0)
	{
		dec_bi(n/8);
		printf(" %d",n%8);
	}
}
