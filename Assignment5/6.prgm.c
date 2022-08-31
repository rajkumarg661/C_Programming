main()
{
	int n,sum=0,rem;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>=1)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;

	}
	printf("sum of digit is %d",sum);
}

