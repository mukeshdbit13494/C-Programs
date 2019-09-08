
int main() 
{ 
	int y,i,count=0;
	printf("\nEnter a year ");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		if(y%i==0)
		{
			count++;
		}
	}
	if(count==2)
	printf("\n%d is a prime number",y);
	else
	printf("n%d is not a prime number",y);
		getch();
} 

  

