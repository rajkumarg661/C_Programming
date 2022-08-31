main()
{
	int s,t,i=2;
	printf("Enter two range:");
	scanf("%d%d",&s,&t);
	for(s;s<=t;s++)
	{
		for(i=2;i<s;i++)
		{
			if(s%i==0)
			break;
		}if(i==s)
			printf("\n%d",s);
	}
	getch();
}
