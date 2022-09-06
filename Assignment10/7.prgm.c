#include<stdio.h>
#include<conio.h>
int sum_n(int);
int main()
{
	int s;
	s=sum_n(10);
	printf("%d",s);
	getch();
}
int sum_n(int n)
{
	int sum=0;
	if(n==1)
			return 1;
	else
		sum=n+sum_n(n-1);
		return sum;
}
