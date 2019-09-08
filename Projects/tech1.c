void main()
{
	int a,count=0;
	scanf("%d",&a);
	while(a>=1)
	{
		if(a>=2000)
		{
			a=a-2000;
			count++;
		}
		else if(a>=1000)
		{
			a=a-1000;
			count++;
		}
		else if(a>=500)
		{
			a=a-500;
			count++;
		}
		else if(a>=200)
		{
			a=a-200;
			count++;
		}
		else if(a>100)
		{
			a=a-100;
			count++;
		}
		else if(a>=50)
		{
			a=a-50;
			count++;
		}
		else if(a>=20)
		{
			a=a-20;
			count++;
		}else if(a>=10)
		{
			a=a-10;
			count++;
		}
		else if(a>=5)
		{
			a=a-5;
			count++;
		}else if(a>=2)
		{
			a=a-2;
			count++;
		}
		else if(a==1)
		{
			a=a-1;
			count++;
		
		}
	}
	printf("%d",count);
}
