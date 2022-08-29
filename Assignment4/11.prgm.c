main()
{
	int n,i=1;
	printf("How many odd number");
	scanf("%d",&n);
	while(i<2*n)
	{
		printf("\n%d",i);
		i+=2;
	}
	getch();
}
