#include<stdio.h>
#include<conio.h>
int fun(int a);
int fun(int a)
{
	if(a==0) 
	return 0;
	fun(a-1);
	printf("%d\t",a);
	printf("hello %d\n",a+1);
}
int main()
{
	int i=10;
	fun(i);
}
