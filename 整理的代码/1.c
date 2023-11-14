#include<stdio.h>
#define N 7
int main()
{
	int a[N]={12,9,16,5,7,2,1},k,s;
	printf("\n初始函数\n");
	for(k=0;k<N;k++)
		printf("%4d",a[k]);
	for(k=0;k<3;k++)
	{
		s=a[k];a[k]=a[N-1-k];a[N-1-k]=s;
	}
	printf("\n交换后的数组\n");
	for(k=0;k<N;k++)
		printf("%4d",a[k]);
	return 0;
} 


&a[i][j],(2)printf(ââ ),a[i][0],a[k][j]
