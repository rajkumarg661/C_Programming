int main()
{
	int c,s1=0,s2=0,ar[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		if(ar[i]%2==0)
			s1=s1+ar[i];
		else
			s2=s2+ar[i];
	}
	printf("sum of odd element is=%d",s2);
	printf("\nsum of even element is=%d",s1);
	getch();
}

