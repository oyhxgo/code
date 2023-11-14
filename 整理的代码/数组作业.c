#include<stdio.h>
#include<string.h>
int main()
{
	char str[10][80],c[80];
	int i;
	for(i=0;i<10;i++)
		gets(str[i]);
	strcpy(c,str[0]);
	for(i=1;i<10;i++)
	{
		if(strlen(c)<strlen(str[i]))
			strcpy(c,str[i]);
		puts(c);
	}
	
	
}
