main()
{
	int n,i=2,j=2;
	printf("Enter Number:");
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
			if(n%i==0)
			{
				for(j=2;j<i;j++)
					if(i%j==0)
						break;
				if(j==i)
				printf(" %d",i);
			}
	}
	getch();
}
