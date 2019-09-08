#include<stdio.h>
#include<conio.h>
void sub(int a[],int n);
int main()
{
   int arr[10]={5,7,8,9,1,3,4,2,1,6},sum=12;	
   sub(arr,sum);
}
void sub(int a[],int n)
{
	int i,j,sum;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			sum=a[i]+a[j];
			if(sum>n)
			{
				printf("{%d,%d}\n",a[i],a[j]);
			}
		}
	}
}
