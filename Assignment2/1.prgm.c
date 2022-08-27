
main()
{
	int n1,n2,temp;
	printf("Enter Two number separated by Comma(,)");
	scanf("%d,%d",&n1,&n2);
	printf("Before Swapping:n1=%d n2=%d",n1,n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("\nAfter Swapping n1=%d n2=%d",n1,n2);
	getch();
}
