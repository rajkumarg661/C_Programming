#include<stdio.h>
#include<conio.h>
int sum_n(int);
int main()
{
	int s;
	s=sum_n(54);
	printf("%d",s);
	getch();
}
int sum_n(int n)
{
	int sum=0,rem;
	rem=n%10;
	if(rem==0)
			return 0;
	else
		sum=rem+sum_n(n/10);
		return sum;
}

