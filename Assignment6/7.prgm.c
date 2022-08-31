main()
{
	int n1,n2,lcm;
	printf("Program For LCM.\n");
	printf("Enter two number:");
	scanf("%d%d",&n1,&n2);
	lcm=n1>n2?n1:n2;
	for(lcm;lcm<=n1*n2;lcm++)
	{
		if(lcm%n1==0 && lcm%n2==0){
			printf("Lcm is=%d",lcm);
			break;}
	}
	getch();
}
