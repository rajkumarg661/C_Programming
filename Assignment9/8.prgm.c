int fact(int);
int main()
{
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	printf("factoria of %d is=%d",a,fact(a));

}
int fact(int n)
{
	int i=1,fact=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	return fact;
}
