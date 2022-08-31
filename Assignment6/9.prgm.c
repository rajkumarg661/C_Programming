main()
{
	int n,i=1;
	printf("Enter Number:");
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
			if(n%i==0)
			{
			printf(" %d",i);
			}
	}
	getch();
}
