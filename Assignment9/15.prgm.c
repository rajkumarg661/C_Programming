void armno(int,int);
int main()
{
	int a,b;
	printf("Enter a and n b:");
	scanf("%d%d",&a,&b);
	armno(a,b);
}
void armno(int n,int t)
{
	for(int i=n;i<t;i++)
	{
		int rem,sum=0;
		int num=i;
		while(num!=0)
		{
			rem=num%10;
			sum=sum+rem*rem*rem;
			num=num/10;
		}
		if(sum==i)
			printf("\n%d",i);
	}
}
