main()
{
	int a,b,c,D;
	printf("Enter Coefficient of x^2 x and constant value:");
	scanf("%d%d%d",&a,&b,&c);
	D=b*b-4*a*c;
	if(D<0)
		printf("Imaginary Root");
	else
		printf("Real Roots");
	getch();
}
