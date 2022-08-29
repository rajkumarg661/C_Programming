main()
{
	int n,i=1,sum=0;
	printf("Upto which number u want to sum");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Total sum is %d",sum);

}
