
main()
{
	int n1,n2;
	printf("Enter Two number separated by Comma(,)");
	scanf("%d,%d",&n1,&n2);
	printf("Before Swapping:n1=%d n2=%d",n1,n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\nAfter Swapping n1=%d n2=%d",n1,n2);
	getch();
}
