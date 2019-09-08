#include<stdio.h>
#include<conio.h>
void main()
{
 int a=10;
 int *p,**pp,***t;
 clrscr();
 p=&a; //store the address of a
 pp=&p;//store the address of p
 t=&pp;
 printf("Address of a : %x\n",p);
 printf("Value of a : %d\n",*p);
 printf("Address of p : %x\n",pp);
 printf("Address of a : %x\n",*pp);
 printf("Value of a : %d\n",**pp);
 printf("%x\n",t);
 printf("%x\n",*t);
 printf("%x\n",**t);
 printf("%d\n",***t);
 getch();
}