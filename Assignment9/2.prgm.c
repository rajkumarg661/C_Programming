float cir_ar(int);
int main()
{
	int a;
	float b;
	printf("Enter radius:");
	scanf("%d",&a);
	b=cir_ar(a);
	printf("Circumference of circle is %f",b);
}
float cir_ar(int r)
{
	return 2*3.14*r;
}
