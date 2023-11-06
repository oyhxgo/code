//车厢调度（栈）
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> a;
	int c,l=1;
	cin>>c;
	int b[200000];
	for(int i=1;i<=c;i++)
	{
		cin>>b[i];
	}
	for(int j=1;j<=c;j++)
	{
		while(l<=b[j])
		{
			a.push(l);
			l++;
		}
		if(a.top()==b[j])
			a.pop();//相当于初始化，为下一个循环做准备
		else
		{
			cout<<"NO";
			return 0;
		}
		
	}
	cout<<"YES";
	return 0;
}