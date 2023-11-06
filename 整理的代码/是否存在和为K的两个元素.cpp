#include<stdio.h>
int main()
{
    int a,b,c[10000],p=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&c[i]);
    }
    for(int j=1;j<a;j++)
    {
        for(int k=j+1;k<=a;k++)
        {
            if(c[j]+c[k]==b)
            {
                
                p=1;
                break;
            }
            
        }
    }
    if(p==0)
        printf("no");
    else
		printf("yes");
    return 0;
}