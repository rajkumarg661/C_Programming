void even_no(int);
int main()
{
	int a;
	printf("Enter no:");
	scanf("%d",&a);
	even_no(a);
}
void even_no(int n)
{
	for(int i=2;i<=2*n;i+=2)
	{
		printf("\n%d",i);
	}
}
