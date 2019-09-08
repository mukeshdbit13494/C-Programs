#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch[255];
	fp=fopen("E:\filedoc\file.txt","r");
	while(fscanf(fp,"%c",ch)!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
}
