#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,b[10000],p=11110;
    scanf("%d",&a);
    while(a!=0)
  	{
  		i=2;
		for(i=2;i<=sqrt(a);i++)
	  	{
	  		if(a%i==0)
	  		{
	  			b[i]++;
	  			if(i<p)
	  				p=i;
	  			a=a/i;
	  			break;
			}
		}
	}
	printf("%d=%d",a,p);
	for(int k=1;k<=a;k++)
	{
		if(b[k]!=0)
			{
				if(b[k]==1)
					printf("*%d",k);
				else
					printf("*%d^%d",k,b[k]);
		}
	}
    return 0;
    
    
    
}