#include<stdio.h>
#include<conio.h>
void rev_num(int);
int main()
{
	rev_num(8);
	getch();

}
void rev_num(int n)
{
	if(n>0){
		printf("%d\n",n);
		rev_num(n-1);}

}
