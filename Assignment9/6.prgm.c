int sumsq_no(int);
int main()
{
	int a;
	printf("Enter no:");
	scanf("%d",&a);
	printf("%d",sumsq_no(a));
}
int sumsq_no(int n)
{
	int sum=0,i=1;
	while(i<=n)
	{
		sum=sum+i*i;
		i++;
	}
	return sum;
}

