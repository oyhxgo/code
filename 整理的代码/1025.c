// #include <stdio.h>
// int main()
// {
//   int a, b[100], c = 1, d = 2;
//   b[1] = 1;
//   b[2] = 1;
//   b[3] = 2;
//   scanf("%d", &a);
//   for (int i = 4; i <= a; i++)
//   {
//     b[i] = c + d;
//     c = b[i - 1];
//     d = b[i];
//   }
//   printf("[");
//   printf("1,");
//   for (int j = 2; j <= a; j++)
//   {
//     if (j == a)
//     {
//       printf(" %d", b[j]);
//       break;
//     }
//     printf(" %d,", b[j]);
//   }
//   printf("]");
// }

// 定义列表�=a= []，输入 55 个整数依次添加进列表 �a 中，并打印列表 �a 。
//  #include <stdio.h>
//  int main()
//  {
//    int i = 1, a[10000];
//    while (scanf("%d", &a[i]) != EOF)
//    {
//      i++;
//    }
//    printf("[");
//    printf("1,");
//    for (int j = 2; j < i; j++)
//    {
//      if (j == i - 1)
//      {
//        printf(" %d", a[j]);
//        break;
//      }
//      printf(" %d,", a[j]);
//    }
//    printf("]");
//  }

//?
// #include <stdio.h>
// #include <math.h>
// long long d[100000000];
// int main()
// {
//   long a, b, c, i = 1;
//   while (scanf("%ld %ld %ld", &a, &b, &c) != EOF)
//   {
//     d[i] = pow(a, b);
//     d[i] = d[i] % c;
//     i++;
//   }
//   for (int j = 1; j < i; j++)
//   {
//     printf("%lld\n", d[j]);
//   }
// }

// 闰年
/* #include<stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    printf("闰年");
  else
    printf("非闰年");
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int a, p = 1;
  scanf("%d", &a);
  for (int i = 1; i <= a; i++)
  {
    if (i * i % a == 1)
    {
      printf("%d\n", i);
      p++;
    }
  }
  if (p == 1)
    printf("None");
  return 0;
} */

// #include <stdio.h>
// int main()
// {
//   double x, p, e;
//   int n;
//   scanf("%lf %d", &x, &n);
//   p = x;
//   for (int i = 1; i <= n; i++)
//   {
//     e = x / (i + p);
//     p = e;
//   }
//   printf("%.2lf", e);
// }

/*
#include<stdio.h>
int oy(int n,int x)
{
  int o;
  if(n==0)
    return 1;
  if(n==1)
    return 2*x;
  if(n>1)
    o=2*x*oy(n-1,x)-2(n-1)*oy(n-2,x);
    return o;

}
int main()
{
  double a,b;
  scanf("%lf %lf",&a,&b);

} */

// 猴子偷桃
//  #include<stdio.h>
//  int main()
//  {
//      int a;
//      scanf("%d",&a);
//      long sum=1;
//      for(int i=1;i<a;i++)
//      {
//          sum+=1;
//          sum=sum*2;

//     }
//     printf("%ld",sum);

// }

// 蛇形矩阵
/* #include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  int b[20][20] = {0};
  b[0][0] = 1;
  int s = 1, x = 0, y = 0, p = 0; // x,y代表坐标，p为方向//y列
  while (s <= a * a)
  {
    s++;
    y++;
    p++;
    b[x][y] = s;
    for (int k = 0; k < p; k++)
    {
      s++;
      x++;
      y--;
      b[x][y] = s;
    }
    s++;
    x++;
    p++;
    b[x][y] = s;
    for (int n = 1; n <= p; n++)
    {
      s++;
      x--;
      y++;
      b[x][y] = s;
    }
  }
  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= a; j++)
    {
      printf("  %d", b[i][j]);
    }
    printf("\n");
  }
}
 */

/* #include<stdio.h>
int main()
{
  int a;
  int b[20][20];
  scanf("%d",&a);
  int h=1,l=1,s=1;
  for(int k=1;k<=2*a-1;k++)
  {
    l=1,h=k;
    while(h>=l)
    {
      if(l<=a&&h<=a){
        if(i%2!=0) a[h][l]=s++;
        else a[l][h]=s++;
      }
        h--,l++;

    }


  }


  }

  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= a; j++)
    {
      printf("  %d", b[i][j]);
    }
    printf("\n");
  }
  return 0;


} */

/* #include <stdio.h>
int main()
{
  long a, c, i = 1, b, d, e, sum[2000];
  while (1)
  {
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    if (a == 0 && b == 0 && c == 0 && d == 0)
    {
      break;
    }
    e = c * d;
    sum[i] = a + b - e;
    i++;
  }
  for (int j = 1; j < i; j++)
  {
    printf("%ld\n", sum[j]);
  }
  return 0;
} */

#include <stdio.h>
#include <string.h>
int main()
{
  char a[100000];
  gets(a);
  int b = strlen(a), p = 0;
  for (int i = 0; i < b; i++)
  {
    if (a[i] == '1')
    {
      p++;
    }
  }
  printf("%d", p);
}