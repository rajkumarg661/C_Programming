int main()
{
	int i,s,ar[10];
	for(i=0;i<10;i++)
	{
	printf("Enter ar[%d]:",i);
	scanf("%d",&ar[i]);
	}
	for(i=0;i<10;i++)
	{
	s=s+ar[i];
	}
	printf("Average of array is=%d",s/10);
	getch();

}

