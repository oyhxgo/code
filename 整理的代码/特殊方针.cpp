//�������1-���;���
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a,y=0,k=1,x=1;//a�����������������x���У�y����
//	int b[100][100];
//	scanf("%d",&a);
//	while(k<=a*a)//��ʵֻ��һ���˳������� 
//	{
//		while(y<a&&!b[x][y+1])//1.Խ���ж�����,2.�ж���һ��λ����û�������˵���;
//			b[x][++y]=k++;//k++�ú���ᣡ�� ��һ�� ��++y��yֵһ��ʼ��0���ж�δ���������+1
//						// ��y=3�ж�ʱ��ִ�����y=4�˳� 
//		while(x<a&&!b[x+1][y])//��ʱ��y�Ѿ�ȷ�������һ����
//			b[++x][y]=k++;//�ڶ��� 
//						//ͬ��xΪʲôһ��ʼΪ1���ڶ��������ж��ɹ���Ҫֱ����һλ���ʳ�ʼֵΪ1�� 
//		while(y>1&&!b[x][y-1]) 
//			b[x][--y]=k++;//������
//		while(x>1&&!b[x-1][y])
//			b[--x][y]=k++; //���Ĳ� 
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

//�������2-���ξ���
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
	int total = n*n;//���� 
	for (int i = 0; i < n; i++)//5��5�� 
	{
		for (int j = 0; j <= i; j++)
		{
			if (i % 2==1)//�������ϴ���С��ż������С�´� 
			{
				a[j][i - j] = num++;
			}
			else
			{
				a[i - j][j] = num++;
			}
		}
 
	}
	for (int i = 0; i < n - 1; i++)//����ڶ���ѭ�� ��i������� ��Ϊ5��4�� 
	{
		for (int j = 0; j <= i; j++)//ͬ�� ��j���Ƶ�i�е����� 
		{
			if (i % 2==1)
			{
				a[n - 1 - j][n - 1 - i + j] = total--;//�Ӻ��濪ʼ��䣬���������� �����¼� 
			}
			else
			{
				a[n - 1 - i + j][n - 1 - j] = total--;//ż�����ϼ� 
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
		a[i] = new int[ha];//�������Ӧ��Ӧ��ָ�� 
	}
	snakeLikeMat(a, ha);//ha���� ���������a�������� 
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

