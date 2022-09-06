
int main()
{
	int ar[10]={7,1,4,5,8,50,2,100,55,65};
	int max=-1,idx=0;
	for(int i=0;i<10;i++)
	{
		if(max<ar[i]){
			max=ar[i];
			idx=i;
		}
	}
	printf("%d%d",idx,max);
}
/*int main()
{
	int l,ar[20]={90,1,2,3,4,20,5,100,180,40,6,7,8,600,9,50,200,150,190,145};
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{

			if((ar[i])<(ar[j]))
			{
				l=ar[j];
			}

		}
		printf("\n%d",l);
	}
	//printf("Largest is %d",l);
	getch();
}*/


