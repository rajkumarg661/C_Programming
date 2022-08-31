main()
{
	int n=2,i=2;
	for(int n=2;n<101;n++)
	{
		for(i=2;n>i;i++)
		{
			if(n%i==0)
				break;
		}
		if(i==n)
			printf("\n%d",n);
	}
	getch();
}
