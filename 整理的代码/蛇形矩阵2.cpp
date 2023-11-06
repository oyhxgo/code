
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,num=1;
    stack<int> l;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)//规定界
    {
    	for(int j=1;j<=i;j++)
        {
        	if(i%2!=0)
			{
				printf("%d ",num++);
			}
			else
				l.push(num++);
				
    	}
    	if(i%2==0)
    	{
    		for(int k=1;k<=i;k++)
    		{
				printf("%d ",l.top());
				l.pop();
			}
		}
	
        printf("\n");
    }
}
    
