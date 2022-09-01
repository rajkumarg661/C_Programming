main()
{
	int m=0;
	for(int i=4;i>0;i--)
	{
		for(int j=1;j<=m;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
		m++;
		printf("\n");
	}
}

