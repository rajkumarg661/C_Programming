int main()
{
	int temp;
	int a[5]={9,5,10,4,8};
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[j]>a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;}
		}
	}
	for(int i=0;i<5;i++)
		{
			printf("\n...%d",a[i]);
		}

	getch();
}
