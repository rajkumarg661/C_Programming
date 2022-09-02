int main()
{
	int n,t,rem=1,sum=0,bv=1;
	printf("Enter number:");
	scanf("%d",&n);
	printf("Enter T value:");
	scanf("%d",&t);
	while(n>=1)
	{
		rem=n%10;
		if(rem!=t)
		{
			sum=sum+rem*bv;
			bv=bv*10;
		}
		n=n/10;
	}
	printf("%d",sum);
}
