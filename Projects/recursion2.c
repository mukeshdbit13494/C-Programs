#include <stdio.h>
#include <conio.h>
#define LIMIT 1000 
void fun2(int n);
void fun2(int n) 
{ 
  if (n <= 0) 
     return; 
  if (n > LIMIT) 
    return; 
  printf("%d ", n); 
  fun2(2*n); 
  printf("%d ", n); 
}    
int main()
{
	int n=200;
	fun2(n);
}
