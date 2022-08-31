main()
{
	int n,sum;
	printf("Enter value of n");
	scanf("%d",&n);
	for(int i=1;i<2*n;i+=2)
	{
		sum=sum+i;
	}
	printf("Sum of first %d number is=%d",n,sum);
	getch();
}
