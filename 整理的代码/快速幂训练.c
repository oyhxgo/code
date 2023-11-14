#include <stdio.h>
#include <math.h>
long long d[10000000];
int main()
{
	long long a, b, c, i = 0;
	while (scanf("%lld %lld %lld", &a, &b, &c) != EOF)
	{ 
		i++;
		d[i] = pow(a, b);
		d[i] = d[i] % c;
		
	}
	for (int j = 1; j < i; j++)
	{
		printf("%lld\n", d[j]);
	}
	return 0;
}
