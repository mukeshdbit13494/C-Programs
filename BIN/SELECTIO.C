#include <stdio.h>
#include <conio.h>
void main()
{
 int arr[10],i,j,n,small,temp;
 clrscr();
 printf("Enter the no of Elements : \n");
 scanf("%d",&n);
 printf("Enter %d elements : \n",n);
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 for(j=0;j<n-1;j++)
 {
  small=j;
  for(i=j+1;i<n;i++)
  {
   if(arr[i]<arr[small])
   small=i;
  }
  temp=arr[j];
  arr[j]=arr[small];
  arr[small]=temp;
 }
 for(i=0;i<n;i++)
 printf("%d\t",arr[i]);
 getch();
}
