float area(int);
int main()
{
	int x;
	float ar;
	printf("Enter radius");
	scanf("%d",&x);
	ar=area(x);
	printf("area is=%f",ar);
}
float area(int r)
{
	float a;
	a=3.14*r*r;
	return a;
}


