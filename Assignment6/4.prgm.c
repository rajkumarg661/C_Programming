main()
{
	int s,i=2;
	printf("Enter n:");
	scanf("%d",&s);
	for(s+=1;1;s++)
	{
		for(i=2;i<s;i++)
		{
			if(s%i==0)
				break;
		}
		if(i==s)
		{
			printf("\n%d",s);
			break;
		}
	}
	getch();
}
