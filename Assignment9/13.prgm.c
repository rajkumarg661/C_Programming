void prime(int,int);
int main()
{
	int a,b;
	printf("Enter range:");
	scanf("%d%d",&a,&b);
	prime(a,b);

}
void prime(int s,int t)
{
	int i,j;
	for(i=s;i<t;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
			printf("\n%d",j);
	}
	getch();
}
