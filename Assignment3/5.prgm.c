main()
{
	int year,flag=0;
	printf("Enter Year:");
	scanf("%d",&year);
	if(year%4==0)
        if(year%100==0)
            if(year%400==0)
                flag=1;
            else
                flag=0;
        else
            flag=1;
    else
        flag=0;
    if(flag==0)
        printf("Not leap");
    else
        printf("Leap");
	getch();
}
