main()
{
	int n,i=1,fact=1;
	printf("enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Fzctorial of %d is=%d",n,fact);

}
