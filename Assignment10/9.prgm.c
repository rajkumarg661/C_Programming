#include<stdio.h>
#include<conio.h>
int sum_n(int);
int main()
{
	int s;
	s=sum_n(4);
	printf("%d",s);
	getch();
}
int sum_n(int n)
{
	int sum=0;
	if(n==0)
			return 0;
	else
		sum=((2*n)-1)+sum_n(n-1);
		return sum;
}

