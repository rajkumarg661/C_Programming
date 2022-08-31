main()
{
	int s,n,i=2,j=1;
	printf("Enter value of n");
	scanf("%d",&n);
	for(s=2;j<=n;s++)
	{
		for(i=2;i<s;i++)
		{
			if(s%i==0)
				break;
		}
		if(i==s){
        j++;
		printf("\n%d",s);
		}
	}
	getch();

}
