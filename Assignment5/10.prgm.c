main()
{
	long int n,t1=-1,t2=1,t3;
	printf("which  term you want:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
	}
	printf("%d",t3);
	getch();
}
