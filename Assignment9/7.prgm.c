int eo(int);
int main()
{
	int x,y;
	printf("Enter number:");
	scanf("%d",&x);
	y=eo(x);
	printf("%d",y);
}
int eo(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}

