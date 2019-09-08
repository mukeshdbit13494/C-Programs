#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[100],i,j,n,key;
 clrscr();
 printf("Enter the no of Elements : \n");
 scanf("%d",&n);
 printf("Enter %d elemnets : \n",n);
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 for(j=1;j<n;j++)
 {
  key=arr[j];
  i=j-1;
  while(i>=0 & arr[i]>key)
  {
   arr[i+1]=arr[i];
   i=i-1;
  }
  arr[i+1]=key;
 }
 for(i=0;i<n;i++)
 printf("%d\t",arr[i]);
 getch();
}