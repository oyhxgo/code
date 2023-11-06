#include<stdio.h>
int main()
{
    int a,i=1;
    double p[10000];
	while(scanf("%d",&a)!=EOF)
	 {
	    if(a<=1600)
	     	p[i]=0;
	    else if(a<=2500)
	     	p[i]=(a-1600)*0.05;
		else if(a<=3500)
			p[i]=(a-1600)*0.1;	
	    else if(a<=4500)
	    	p[i]=(a-1600)*0.15;
	    else if(a>4500)
	    	p[i]=(a-1600)*0.2;
	    i++;
	 }
	 for(int j=1;j<i;j++)
	 {
	 	printf("%.2lf\n",p[j]);
	 }
 
    
}
