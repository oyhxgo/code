#include<stdio.h>
int oy(int m)
{
	int n;
	n=m%5;
	if(n<=3)
		printf("Fishing in day %d\n",m);
	else
		printf("Drying in day %d\n",m);
}
int main()
{
	int a[10000],i=1;
	while(scanf("%d",&a[i])!=EOF)
	{
		i++;
	}
	for(int j=1;j<i;j++)
	{
		oy(a[j]);
		
	}
}