#include<bits/stdc++.h>
using namespace std;
bool c[1000][1000];
int main()
{ 
    memset(c,0,sizeof(c));
    int a,b;
    char l;
    cin>>a>>b;
        for(int i=1;i<=a;i++)
    	{
	    	for(int j=1;j<=b;j++)
	        {
	            cin>>l;
	            if(l=='*')c[i][j]=1;
	        }
    	}
		for(int i=1;i<=a;i++)
		{
		    for(int j=1;j<=b;j++)
		    {
		        if(c[i][j]==1)
		            printf("*");
		        else
		            printf("%d",c[i][j+1]+c[i][j-1]+c[i+1][j]+c[i-1][j]+c[i+1][j+1]+c[i-1][j-1]+c[i+1][j-1]+c[i-1][j+1]);
		    }
		    printf("\n");
		}
	return 0;

}