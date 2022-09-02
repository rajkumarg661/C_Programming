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
	int i,j;
	for(int i=n+1;1;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
			return j;
	}


}
