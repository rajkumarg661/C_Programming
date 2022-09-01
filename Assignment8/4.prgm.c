main()
{
	int n,a,b,c;
	while(1)
	{
	printf("\n1.Isosceles\n2.RightAngle\n3.Equilateral\n4.Exit\nEnter choice what u want to Check:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("Enter a:");
		scanf("%d",&a);
		printf("Enter b:");
		scanf("%d",&b);
		printf("Enter c");
		scanf("%d",&c);
		if((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b))
			printf("Isoceles Triangle.");
		else
			printf("Not Isoceles");
		break;
		case 2:
		printf("Enter a:");
		scanf("%d",&a);
		printf("Enter b:");
		scanf("%d",&b);
		printf("Enter c");
		scanf("%d",&c);
		if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
			printf("Right Angle Triangle.");
		else
			printf("Not Right angle triangle.");
		break;
		case 3:
		printf("Enter a:");
		scanf("%d",&a);
		printf("Enter b:");
		scanf("%d",&b);
		printf("Enter c");
		scanf("%d",&c);
		if(a==b && b==c && a==c)
			printf("Equilateral Triangle.");
		else
			printf("Not Equilateral Triangle.");
		break;
		case 4:
		exit(0);
		default:
		printf("Enter Valid Choice!");
	}
	}
	getch();
}
