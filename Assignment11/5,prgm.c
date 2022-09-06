int main()
{
	int min,arr[10]={7,4,5,8,50,2,100,55,65,1};
	min=arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i]<min)
			min=arr[i];
	}
	printf("%d",min);
}
