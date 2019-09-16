//#include<math.h>
//
//
//void main()
//{
////	int t,n,i=0;
////	scanf("%d",&t);
////	while(t-- >0)
////	{
////		scanf("%d",&n);
////		int a[n];
////		for(i=0;i<n;i++)
////		scanf("%d",&a[i]);
////		//kadane algo start
////		int max_end=0,max_far=0,temp=a[0];
////		for(i=0;i<n;i++)
////		{
////			max_end+=a[i];
////			if(temp<a[i])
////			{
////				temp=a[i];
////			}
////			if(max_end<0)
////			{
////				max_end=0;
////			}
////			else if(max_far<max_end)
////			{
////				max_far=max_end;
////			}
////		}
////		if(max_far==0)
////		{
////			printf("%d",temp);
////		}
////		else
////		printf("%d",max_far);
////	}
//}


#include <stdio.h>
int main() {
    int t,n,i=0,j=0,count=0;
	scanf("%d",&t);
	while(t-- >0)
	{
		scanf("%d",&n);
		int a[n];
		int ar[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		count=0;
		for(i=0;i<n;i++)
		{
		    for(j=i+1;j<n;j++)
		    {
		        if(a[i]>a[j])
		        {
		            count++;
		        }
		    }
		}
		printf("%d\n",count);
	}
	return 0;
}
