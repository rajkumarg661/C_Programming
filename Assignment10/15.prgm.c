#include<stdio.h>
#include<conio.h>
int nterm_fibo(int);
int i=1,t1=-1,t2=1,t3;
int main()
{
	int value,term;
	printf("Enter which term u want?:");
	scanf("%d",&term);
	value=nterm_fibo(term);
	printf("%d",value);

}
int nterm_fibo(int n)
{
	if(i<=n){
	i++;
	t3=t1+t2;
	t1=t2;
	t2=t3;
	nterm_fibo(n);//recursion done here
	}
	else
		return t3;
}
