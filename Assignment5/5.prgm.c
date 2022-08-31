main()
{
	int n,i=0;
	float div=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>=1)
	{
		n=n/10;
		i++;
	}
	printf("%d digit number",i);
}

