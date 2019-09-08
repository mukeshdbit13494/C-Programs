#include<stdio.h>
#include<conio.h>
void kadaneAlgo(int ar[]);
int max(int a[],int n);
int main()
{
    int a[100];
    kadaneAlgo(a);

}
int max(int a[],int n)
{
    int i,maxValue;
    maxValue=a[0];
    for(i=0;i<n;i++)
    {
        if(maxValue>=a[i+1])
            maxValue=a[i+1];
    }
    return maxValue;
}
void kadaneAlgo(int ar[])
{
    int n,i,j=0,k,size,maxValue,sum=0,b[100];
    printf("Enter the Numbers of test cases\n");
    scanf("%d",&n);
    k=n;
    while(n>0 && n<=100)
    {
        printf("Enter the Number of elements\n");
        scanf("%d",&size);
        printf("Enter the Elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&ar[i]);
            sum=sum+ar[i];
        }
        maxValue=max(ar,size);
        if(maxValue<=sum)
           b[j]=sum;
        else
            b[j]=maxValue;
        j++;
        n--;
    }
    for(i=0;i<k;i++)
    printf("%d\n",b[i]);
}
