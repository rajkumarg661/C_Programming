main()
{
	int n;
	printf("Enter Day Of Week:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("Welcome To Monday");
		break;
		case 2:
		printf("Welcome To Tuesday");
		break;
		case 3:
		printf("Welcome To wednesday");
		break;
		case 4:
		printf("Welcome To Thursday");
		break;
		case 5:
		printf("Welcome To Friday");
		break;
		case 6:
		printf("Welcome to Saturday");
		break;
		case 7:
		printf("Welcome To Sunday");
		break;
		default:
		printf("Enter Valid Day!");
	}
	getch();


}
