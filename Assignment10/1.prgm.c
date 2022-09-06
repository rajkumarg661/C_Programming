#include<stdio.h>
#include<conio.h>
void num(int);
int main()
{
	num(8);
	getch();

}
void num(int n)
{
	if(n>=1){
		num(n-1);}
		printf("%d\n",n);
}
