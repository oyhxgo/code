//成群的奶牛
#include<stdio.h>
int oy(int n,int k,int b)
{
	int l,m;
	if((n-b)%2==0)
	{
		k=k+2;
		l=(n-b)/2+b;
		m=(n-b)/2;
		oy(l,k,b);
		oy(m,k,b);	
	}
}
int main()
{
	int a,b,p=0;
	scanf("%d %d",&a,&b);
	p=oy(a,0,b);
	printf("%d",p);
	return 0;
	
}