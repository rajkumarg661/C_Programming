main()
{
	int n,i=2;
	printf("how many even number you want");
	scanf("%d",&n);
	n=2*n;
	while(n>=2)
	{
		printf("\n%d",n);
		n-=2;
	}
	getch();
}
