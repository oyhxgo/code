//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a,i=0,m,b,l,sum=0,p;
//	scanf("%d",&a);
//	m=a;
//	if(m==1||m==145)
//	{
//		printf("%d",m);
//		
//	}
//	while(m!=1&&m!=145)
//	{
//		i=0;
//		a=m;
//		while(a)//计数位
//		{
//			i++;
//			a=a/10;
//		}
//		if(i==1)
//		{
//			printf("%d->%d*%d=%d\n",m,m,m,m*m);
//			m=m*m;
//		}
//	
//		if(i>=2)
//		{
//			printf("%d->",m);
//			p=pow(10,i-1);
//			l=m;
//			while(i)
//			{
//				
//				b=l/p%10;
//				p/=10;
//				sum=sum+b*b;
//				if(i!=1)
//					printf("%d*%d+",b,b);
//				if(i==1)
//					printf("%d*%d=%d\n",b,b,sum);
//				i--;
//			}
//			m=sum;
//			sum=0;
//	
//		}
//		
//	}
//
//	return 0;
//}



//只能用c
#include<stdio.h>
int main()
{
	int a,i=0,m,b,l,sum=0,p=1;
	scanf("%d",&a);
	m=a;
	if(m==1||m==145)
	{
		printf("%d",m);
		
	}
	while(m!=1&&m!=145)
	{
		i=0;
		a=m;
		while(a)//计数位
		{
			i++;
			a=a/10;
		}
		if(i==1)
		{
			printf("%d->%d*%d=%d\n",m,m,m,m*m);
			m=m*m;
		}
		
		if(i>=2)
		{
			printf("%d->",m);
			for(int j=i-1;j>0;j--)
			{	
				p=p*10;
			}
			l=m;
			while(i)
			{
				
				b=l/p%10;//正序
				p/=10;
				sum=sum+b*b;
				if(i!=1)
					printf("%d*%d+",b,b);
				if(i==1)
					printf("%d*%d=%d\n",b,b,sum);
				i--;
			}
			m=sum;
			sum=0;
			p=1;
		}
		
	}
	
	return 0;
}
