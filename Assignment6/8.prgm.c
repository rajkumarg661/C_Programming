main()
{
	int n1,n2,n,i;
	printf("Program For HCF.\n");
	printf("Enter two number");
	scanf("%d%d",&n1,&n2);
	n=n1<n2?n1:n2;
	for(i=2;i<=n;i++)
	{
		if(n1%i==0 && n2%i==0){
		printf("%d",i);
		break;}
	}
	if(i==n+1)
	printf("1");
	getch();
}
