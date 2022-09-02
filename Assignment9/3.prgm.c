void num(int);
int main()
{
	int a,s;
	printf("upto which u want to print number?");
	scanf("%d",&a);
	num(a);
}
void num(int n)
{
	int i=1;
	while(i<=n)
	{
		printf("\n%d",i);
		i++;
	}
}
