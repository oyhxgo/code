//#include<stdio.h>
//int main()
//{
//	long long a,b,c,d,i=0,p[10000000];
//	while(1)
//	{
//		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
//		if(a==0&&b==0&&c==0&&d==0)
//			break;
//		i++;
//		p[i]=a+b-c*d;
//		
//	}
//	for(int j=1;j<=i;j++)
//	{
//		printf("%lld\n",p[j]);
//	}
//	
//	return 0;
//}


#include <stdio.h>

int main()
{
	char b[1000],a;
	int i=0;
	a=getchar();
	while(a!='\n')
	{
		b[i]=a+4;
		a=getchar();
		i++;
	}
	for(int j=0;j<=i;j++)
	{
		printf("%c",b[j]);
	}
}

