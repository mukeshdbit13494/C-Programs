#include<stdio.h>
#include<conio.h>
void sumPosition(int ar[]);
int main()
{
    int a[100];
    sumPosition(a);

}

void sumPosition(int ar[])
{
    int n,i,j=0,k=0,index=0,size,maxValue,sum,insum,start[100],end[100];
    sum=ar[index];
    printf("Enter the Numbers of test cases\n");
    scanf("%d",&n);
    while(n>0 && n<=100)
    {
        printf("Enter the Number of elements And Sum\n");
        scanf("%d",&size);
        scanf("%d",&insum);
        printf("Enter the Elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&ar[i]);
        }
        for(i=1;i<size;i++)
        {
        	 sum=sum+ar[i];
        	 while(sum>insum)
        	 {
        	 	sum=sum-ar[index];
        	 	index++;
		  	 }
		  	 
		  	 if(sum==insum)
		  	  {
		  	  	 start[j]=index+1;
		  	    end[k]=i+1;
		  	    k++;
					j++;
		  	    break;
			  }
		  }
		  n--;
    }
    for(i=0;i<k;i++)
    printf("%d %d\n",start[i],end[i]);
}
