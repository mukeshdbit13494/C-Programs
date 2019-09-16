#include<stdio.h>

void merge(int a[],int l,int m,int r);
void mergeSort(int a[],int l,int r);
void main()
{
	int ar[]={2,4,1,3,5},i=0;
	mergeSort(ar,0,4);
}

void merge(int a[],int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	
	for(i=0;i<n1;i++)
	  L[i]=a[i];
	  
	for(j=0;j<n2;i++)
	  R[j]=a[j];
	  
	  i=0,j=0,k=0;
	  while(i<n1 && j<n2)
	  {
	  	   if(L[i]<R[j])
	  	   {
	  			a[k]=L[i];
	  			i++;
		   }
		   else
		   {
		   	a[k]=R[j];
		   	j++;
			}
			k++;
	  }
	  while(i<n1){
	  	a[k]=L[i];
	  	i++;
	  	k++;
	  }
	  while(j<n2){
	  	a[k]=R[j];
	  	j++;
	  	k++;
	  }
	  	for(i=0;i<k;i++)
	{
		printf("%d\t",a[i]);
	}
}
void mergeSort(int ar[],int l,int r)
{
	if(l<r)
	{
		int m;
		m=(l+(r-1))/2;
		mergeSort(ar,l,m);
		mergeSort(ar,m+1,r);
		merge(ar,l,m,r);
		
	}
	
}
