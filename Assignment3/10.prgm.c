main()
{
	int typedef subject;
	int per;
	char grade;
	subject s1,s2,s3,s4,s5;
	printf("Enter Marks Of Five Subject separated separeted by space");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	if(s1>=50&&s2>=50&&s3>=50&&s4>=50&&s5>=50)
	{
		per=(s1+s2+s3+s4+s5)/5;
		if(per>=90)
		grade='A';
		else if(per>=80)
		grade='B';
		else if(per>=70)
		grade='C';
		else if(per>=60)
		grade='D';
		else if(per>=50)
		grade='E';
		else
		grade='F';
		printf("You passed with grade %c",grade);

	}
	else
	printf("You Failed");



}
