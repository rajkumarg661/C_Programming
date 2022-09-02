int sum_no(int);
int main()
{
	int a;
	printf("Enter no:");
	scanf("%d",&a);
	printf("%d",sum_no(a));
}
int sum_no(int n)
{
	int sum=0,i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	return sum;
}
