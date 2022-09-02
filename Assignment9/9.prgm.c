int perm(int,int);
main()
{
	int a,b,way=0;
	printf("Enter total items:");
	scanf("%d",&a);
	printf("how many items u want to arrange:");
	scanf("%d",&b);
	way=perm(a,b);
	printf("%d",way);



}
int perm(int n,int r)
{
	int i,fact=1,n2;
	i=n;
	n2=n-r;
	while(i>n2)
	{
		fact=fact*i;
		i--;
	}
	return fact;
}

