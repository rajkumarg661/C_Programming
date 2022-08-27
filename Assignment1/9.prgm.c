main()
{
	int pa,t;
	float r,si;
	printf("Enter Prinipal Amount");
	scanf("%d",&pa);
	printf("Enter Time (yearly):");
	scanf("%d",&t);
	printf("Enter Rate of interest:");
	scanf("%f",&r);
	si=(pa*r*t)/100;
	printf("Simple Interest For Your Amount is=%.2f",si);
	getch();
}
