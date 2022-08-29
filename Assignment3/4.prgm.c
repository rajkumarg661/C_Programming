main()
{
	int n,res;
	printf("Enter A number:");
	scanf("%d",&n);
	for(int i=1;i<=n/2;i++)
	{
		res=2*i;
		if(res==n)
			break;

	}
	if(res==n)
		printf("Even");
	else
		printf("Odd");
	getch();
}
