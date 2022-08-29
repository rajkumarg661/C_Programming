main()
{
	int n;
	printf("How many odd number");
	scanf("%d",&n);
	n=2*n-1;
	while(n>0)
	{
		printf("\n%d",n);
		n-=2;
	}
	getch();
}
