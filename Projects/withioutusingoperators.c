void main()
{
	int a,b,x,y,carry,borrow;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&a,&b);
	x=a;
	y=b;
	while(b!=0)
	{
		carry=a & b;
		    a=a ^ b;
		    b=carry<<1;
	}
	printf("Sum of tow number is : %d\n",a);
	while(y!=0)
	{
		borrow=(~x) & y;
		     x=x ^ y;
		     y=borrow<<1;
	}
		printf("Sub of tow number is : %d\n",x);
}
