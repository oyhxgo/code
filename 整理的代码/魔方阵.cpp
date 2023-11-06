//魔方阵
#include<stdio.h>
int main()
{
	int n,x=0,y=0,a[100][100]={0},i;
	scanf("%d",&n);//输入界
	y=(n+1)/2-1;
	a[0][y]=1;
	for(i=2;i<=n*n;i++)
	{
		int x1=x,y1=y;//用于找到上一个坐标
		x=(x+(n-1))%n;//向下移动两格，除尽了取余数//这里实现了在右上方
		y=(y+1)%n;//向右一格
		if(a[x][y]!=0)//如果下一个不为0，向下填充!!!!
		{
			x=(x1+1)%n;
			y=y1;
		}
		a[x][y]=i;
	}
	for(int j=0;j<n;j++)
	{
		for(int k=0;k<n;k++)
		{
			printf("%5d",a[j][k]);
		}
		printf("\n");
		
	}
	return 0;
	
	
}