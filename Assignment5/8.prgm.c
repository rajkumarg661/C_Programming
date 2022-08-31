
main()
{
	int n,i=1,t;
	printf("Enter number to print table:");
	scanf("%d",&n);
	while(i<=10)
	{
		t=n*i;
		printf("\n%d * %d =%d",n,i,t);
		i++;
	}
	getch();
}
