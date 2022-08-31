main()
{
	long long int n, t1=-1,t2=1,t3=0,flag=0;
	printf("Which term u want to find: ");
	scanf("%ld",&n);
	for(int i=1;t3<=n;i++)
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
		if(t3==n)
		{
		flag=1;               //here flag is just to know weather if block runs or not
		printf("%ld is available at %d position",n,i);
		break;
		}
	}
	if (flag==0)
	printf("%ld is not element of fibonacci series",n);
	getch();
}

