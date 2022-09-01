main()
{
	int n,a,b;
	while(1)
	{
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nEnter choice what u want to perform:");

	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("Enter a:");
		scanf("%d",&a);
		printf("Enter b:");
		scanf("%d",&b);
		printf("Addition of a and b is=%d",a+b);
		break;
		case 2:
		printf("Enter a:");
		scanf("%d",&a);
		printf("Enter b:");
		scanf("%d",&b);
		printf("Subtraction of a and b is=%d",a-b);
		break;
		case 3:
		printf("Enter a:");
		scanf("%d",&a);
		printf("Enter b:");
		scanf("%d",&b);
		printf("Multiplication of a and b is=%d",a*b);
		break;
		case 4:
		printf("Enter a:");
		scanf("%d",&a);
		printf("Enter b:");
		scanf("%d",&b);
		printf("Division of a and b is=%d",a/b);
		break;
		case 5:
		exit(0);
		default:
		printf("Enter Valid Choice!");
	}
	}
	getch();


}
