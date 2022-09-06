#include<stdio.h>
#include<conio.h>
int rev_no(int);
int rem,sum=0,s;
int main()
{
		s=rev_no(786);
		printf("%d",s);
		getch();
}
int rev_no(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
		{
		rem=n%10;
		sum=sum*10+rem;
		rev_no(n/10);
		return sum;
		}


}
