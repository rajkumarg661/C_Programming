
main()
{
	int n,sum;
	printf("Enter a number");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum=sum+i*i*i;
	}
	printf("Sum of cube of %d is=%d",n,sum);
	getch();
}
