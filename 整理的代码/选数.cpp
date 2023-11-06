
//DFS
#include<stdio.h>
#include<math.h>
int i,a,b,c[10000],ans=0;
int ss(int n)
{
	for(int o=2;o<=sqrt(n);o++)
	{
		if(n%o==0)
		{
			return 0;
		}
	}
	return 1;
}
int dfs(int t,int sum,int y)//t检查加了几个了，sum用来计算和，y是索引
{
	if(t==b)//检查是不是加了这么多数
	{
		if(ss(sum))
			ans++;
	}
	else
		for(int j=y;j<=a;j++)
			dfs(t+1,sum+c[j],j+1);//相当于索引，索引下一次选数从本数的下一数开始
			
		
}
int main()
{	
	
	scanf("%d %d",&a,&b);//a是个数，b是选的个数
	for(i=1;i<=a;i++)
	{
		scanf("%d",&c[i]);
	}
	dfs(0,0,1);
	printf("%d",ans);

}


