main()
{
	int n,i=2;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0){
		printf("Not prime");
		break;}
	}
    if(i==n)
        printf("Prime");
    if(n==1)
        printf("not prime");
	getch();
}
