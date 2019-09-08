#include<stdio.h>
#include<conio.h>
void Merging(int A[],int lb,int mid,int ub);
void Merge_sort(int A[],int lb,int ub)
{
int mid,i;
 if(lb<ub)
 {
  mid=(lb+ub)/2;
  Merge_sort(A,lb,mid);
  Merge_sort(A,mid+1,ub);
  Merging(A,lb,mid,ub);
   for(i=lb;i<ub;i++)
   printf("%d",A[i]);
 }
}
void Merging(int A[],int lb,int mid,int ub)
{
 int i,j,k,n1,n2,left[10],right[10];
 n1=mid-lb+1;
 n2=ub-mid;
 for(i=0;i<n1;i++)
 left[i]=A[lb+i-1];

 for(j=0;j<n2;j++)
 right[j]=A[mid+1];
 i=1;
 j=1;
 for(k=lb;k<ub;k++)
 {
  if(left[i]<=right[j])
  {
   A[k]=left[i];
   i++;
  }
  else
  {
   A[k]=right[j];
   j=j+1;
  }
 }

}
void main()
{
 int A[100],n,i,j;
 clrscr();
 printf("Enter the no of elements : \n");
 scanf("%d",&n);
 printf("Enter the %d elements :\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&A[i]);
 Merge_sort(A,0,n-1);
 getch();
}