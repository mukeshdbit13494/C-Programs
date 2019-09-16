#include<stdio.h>
int sum(int a,int b)
{
	int carry;
	while(b!=0)
	{
		carry=a & b;
		    a=a ^ b;
		    b=carry<<1;
	}
	return a;
}
int sub(int x,int y)
{
	int borrow;
	while(y!=0)
	{
		borrow=(~x) & y;
		     x=x ^ y;
		     y=borrow<<1;
	}
	return x;
}
int div(int x,int y)
{
	int count=0;
	while(x>=y)
	{
		x=sub(x,y);
		count=sum(count,1);
	}
	return count;
}
int mult(int x,int y)
{
	int a=x;
	while(y!=1)
	{
		a=sum(x,a);
		y=sub(y,1);
	}
	return a;
}
void main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	//if(a-(2*(a/2)==0)
	if(sub(a,mult(div(a,2),2))==0)
	{
		printf("%d is an even number\n",a);
	}
	else
	{
			printf("%d is an odd number\n",a);
	}
	
}
