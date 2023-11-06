// 递归
/* #include <stdio.h>
int oy(int x)
{
  if (x < 0)
  {
    return -1;
  }
  else if (x == 0)
  {
    return 0;
  }
  else if (x > 0)
  {
    return 1;
  }
}
int main()
{
  int a[100000], b[100000], i = 1;
  while (scanf("%d", &a[i]) != EOF)
  {

    b[i] = oy(a[i]);
    i++;
  }
  for (int j = 1; j < i; j++)
  {
    printf("sign(%d) = %d\n", a[j], b[j]);
  }
} */
// 用递归的方法求Hermite多项式的值

// #include <stdio.h>
// float oy(float n, float x)
// {
//   float p;
//   if (n == 0)
//   {
//     return 1;
//   }
//   if (n == 1)
//   {
//     return 2 * x;
//   }
//   if (n > 1)
//   {
//     p = 2 * x * oy(n - 1, x) - 2 * (n - 1) * oy(n - 2, x);
//     return p;
//   }
// }
// int main()
// {
//   float a, b, h;
//   scanf("%f %f", &a, &b);
//   h = oy(a, b);
//   printf("%.2f", h);
//   return 0;
// }

// #include <stdio.h>
// int oy(int m, int n)
// {
//   if (m == 0)
//   {
//     return n + 1;
//   }
//   if (m > 0 && n == 0)
//   {
//     int h = oy(m - 1, 1);
//     return h;
//   }
//   if (m > 0 && n > 0)
//   {
//     int j = oy(m - 1, oy(m, n - 1));
//     return j;
//   }
// }
// int main()
// {
//   int a, b;
//   scanf("%d %d", &a, &b);
//   printf("%d", oy(a, b));
// }
/*
#include <stdio.h>
int oy(int a, int b)
{
  int o,p;
    if ((a - b) % 2 == 0)
    {
      p=(a-b)/2;
      o=p+b;
    }
  if((a-b)%2!=0)
  {

  }
  return ;
}
int main()
{
  int a, b, h;
  scanf("%d %d", &a, &b);
  h = oy(a, b);
  printf("%d", h);
} */
// 3.
//  #include <stdio.h>
//  int h[10001];
//  int main()
//  {
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) // 按照递增顺序计算扩展出的自然数的个数
//    {
//      h[i] = 1; // 扩展出的自然数包括i本身
//      for (int j = 1; j <= i / 2; j++)
//        // i左边分别加上1…自然数 按规则扩展出的自然数
//        h[i]++;
//    }
//    printf("%d", h[n]);
//    return 0;
//  }

// 分解因数
#include <stdio.h>
int main()
{
  int n, a, b[10000], p;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &a);
    for (int j = 1; j <= a; j++) // 遍历
    {
      b[j] = 1;
      for (int l = 2; l <= j; l++)
      {
        if (j % l == 0)
        {
          p = j / l;
          b[j] = b[l] + b[p] - 1;
          break;
        }
      }
    }
    printf("%d\n", b[a] + 1);
  }
}