main()
{
	for(int i=4;i>0;i--)
	{
		for(int k=0;k<=4-i;k++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}


}
