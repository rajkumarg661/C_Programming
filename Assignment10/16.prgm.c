#include<stdio.h>
#include<conio.h>
int hcf(int,int);
int main()
{
	int a,b;
	printf("%d",hcf(3,10));

}
int hcf(int a,int b)
{
	if(a==b)
		return a;
	if(a%b==0)
		return b;
	if(b%a==0)
		return a;
	if(a>b)
		return(hcf(a%b,b));
	else
		return(hcf(a,b%a));

}

