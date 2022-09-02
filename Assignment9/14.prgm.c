int armno(int);
int main()
{
	armno(152);
}
int armno(int n)
{
	int rem,no=0,on=n;
	for(n;n>=1;1)
	{
		rem=n%10;
		no=no+rem*rem*rem;
		n=n/10;
	}
	if(no==on)
		printf("Armstrong");
	else printf("no");

}
