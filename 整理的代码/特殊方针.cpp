//特殊矩阵1-回型矩阵
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a,y=0,k=1,x=1;//a代表我们输入的数，x是行，y是列
//	int b[100][100];
//	scanf("%d",&a);
//	while(k<=a*a)//其实只起到一个退出的作用 
//	{
//		while(y<a&&!b[x][y+1])//1.越界判定变量,2.判断下一个位置有没有有填了的数;
//			b[x][++y]=k++;//k++好好体会！！ 第一步 ；++y，y值一开始是0，判断未触界后立马+1
//						// 当y=3判定时，执行完后y=4退出 
//		while(x<a&&!b[x+1][y])//此时的y已经确定在最后一排了
//			b[++x][y]=k++;//第二步 
//						//同理，x为什么一开始为1，第二步后面判定成功后要直接下一位，故初始值为1； 
//		while(y>1&&!b[x][y-1]) 
//			b[x][--y]=k++;//第三步
//		while(x>1&&!b[x-1][y])
//			b[--x][y]=k++; //第四步 
//	} 
//	for(int i=1;i<=a;i++)
//	{
//		for(int j=1;j<=a;j++)
//			{
//			printf("%d ",b[i][j]);
//		}
//		printf("\n"); 
//	}
//	return 0;	
//} 

//特殊矩阵2-蛇形矩阵
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a,x,y,k=1;
//	int b[30][30];
//	scanf("%d",&a);
//	while(k<=a*a)
//	{
//		while()b[]=k++;
//		while()b[]=k++;
//		while()b[]=k++;
//		while()b[]=k++;
//	}
//	
//	for(int i=1;i<=a;i++)
//	{
//		for(int j=1;j<=a;j++)
//			{
//			printf("%d ",b[i][j]);
//		}
//		printf("\n"); 
//	}
//	return 0;	
// } 
//
#include <iostream>
 
using namespace std;
 
 
void snakeLikeMat(int **a, int n)
{
	int num = 1;//num 
	int total = n*n;//总数 
	for (int i = 0; i < n; i++)//5则5行 
	{
		for (int j = 0; j <= i; j++)
		{
			if (i % 2==1)//奇数行上大下小，偶数行上小下大 
			{
				a[j][i - j] = num++;
			}
			else
			{
				a[i - j][j] = num++;
			}
		}
 
	}
	for (int i = 0; i < n - 1; i++)//解决第二个循环 ，i代表填几行 若为5则4行 
	{
		for (int j = 0; j <= i; j++)//同理 ，j控制第i行的数量 
		{
			if (i % 2==1)
			{
				a[n - 1 - j][n - 1 - i + j] = total--;//从后面开始填充，这是奇数行 行往下加 
			}
			else
			{
				a[n - 1 - i + j][n - 1 - j] = total--;//偶数往上加 
			}
		}
	}
}
 
 
int main()
{
 
	int ha = 0;
	cin >> ha;
	int **a = new int*[ha];
	for (int i = 0; i < ha; i++)
	{
		a[i] = new int[ha];//把数组对应相应的指针 
	}
	snakeLikeMat(a, ha);//ha代表 输入的数，a代表数组 
	for (int i = 0; i < ha; i++)
	{
		for (int j = 0; j < ha; j++)
		{
			if (a[i][j] > 0 && a[i][j] <= ha*ha){
				cout << a[i][j] << "\t";
			}
			else cout << " " << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < ha; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	system("pause");
}	

