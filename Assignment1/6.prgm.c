#define PI 3.14
main()
{
	float radius,area;
	printf("Enter a radius:");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("Area of circle having radius %.2f is %.2f",radius,area);
}
