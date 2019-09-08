#include<stdio.h>
void main()
{
 int ar[5]={1,2,3,4,5};
 int *p[5],i;
 clrscr();

 for(i=0;i<5;i++)
 {
  p[i]=ar[i];
  printf("%d\n",p);
 }
 getch();
}