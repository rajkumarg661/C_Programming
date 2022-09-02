int prime(int);
int main()
{
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	printf("%d",prime(a));
}
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==n)
		return 1;
	else return 0;

}
