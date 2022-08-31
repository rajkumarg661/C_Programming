main()
{
	int n,t1=-1,t2=1,t3;
	printf("How many fibonacci series");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
		printf("\n%d",t3);
	}
	getch();
}
