#include<stdio.h>
#include<conio.h>
void intersectio(int a[],int b[]);
int main()
{
   int arr1[10]={5,7,8,9,1,3,4,2,1,6},arr2[7]={20,4,7,90,5,60,30};	
   intersection(arr1,arr2);
}
void intersection(int a[],int b[])
{
	int i,j,k=0,c[10]; 
	for(i=0;i<10;i++)
	{
		for(j=0;j<7;j++)
		{
			if(a[i]==b[j])
			{
			   c[k]=a[i];
			   k++;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d\t",c[i]);
	}
}
