main()
{
	int n1,n2,s,flag=0;
	printf("Enter two number:");
	scanf("%d%d",&n1,&n2);
	s=n1<n2?n1:n2;
	for(int i=2;i<=s;i++)
	{
		if(n1%i==0 && n2%i==0){
		flag=1;
		printf("Not Co-Prime");
		break;}
	}
	if(flag==0)
	printf("Co-Prime");
}
