#include<stdio.h>
#define PI 3.1405
	int main(void)
	{         
	  double r,h,C1;
	  double Sb,Vb,Va,Sa;
	  scanf("%lf %lf",&r,&h);
	  C1=2*PI*r;
	  Sa=PI*r*r;
	  Sb=4*PI*r*r;
	  Va=4.0/3*PI*r*r*r;
	  Vb=PI*r*r*h;
	  printf("C1=%.2lf\nSa=%.2lf\nSb=%.2lf\nVa=%.2lf\nVb=%.2lf\n",C1,Sa,Sb,Va,Vb);
       return 0;
	}
