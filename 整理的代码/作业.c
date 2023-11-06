/* #include <stdio.h>
int main()
{
  int max = 0, min = 10000, a;
  for (int i = 1; i <= 10; i++)
  {
    scanf("%d", &a);
    if (a > max)
    {
      max = a;
    }
    if (a < min)
    {
      min = a;
    }
  }
  printf("%d %d", max, min);
} */

// #include <stdio.h>
// int main()
// {
//   int i = 1, a, b[100000];
//   scanf("%d", &a);
//   while (a)
//   {
//     b[i] = a % 10;
//     a = a / 10;
//     printf("%d", b[i]);
//     i++;
//   }
//   printf("\n");
//   for (int k = i - 1; k > 0; k--)
//   {
//     printf("%d", b[k]);
//   }
//   printf("\n%d\n", i - 1);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int a, b, c, d, f;
//   for (int i = 1000; i <= 9999; i++)
//   {
//     a = i % 10;
//     b = i / 10 % 10;
//     c = i / 100 % 10;
//     d = i / 1000;
//     if (a != b != c != d)
//     {
//       f = a * 1000 + d + c * 10 + b * 100;
//       if (i == f * 4)
//         printf("%d\n", i);
//     }
//   }
// }
/*
#include <stdio.h>
int main()
{
  int p, b, c;
  for (int a = 1000; a <= 9999; a++)
  {
    b = a / 100;
    c = a % 100;
    p = b + c;
    p *= p;
    if (p == a)
    {
      printf("%d\n", a);
    }
  }
} */

 #include <stdio.h>
 int main()
 {
   int d, f, g, b, c,a,i,p=0;
   for (a = 10; a <= 99; a++)
   {
     b = a % 10;
     c = a / 10;
     if (b != c)
     {
       for (i = 10; i <= 99; i++)
       {
         d = i % 10;
         f = i / 10;
         g = (10 * b + c) * (10 * d + f);
         if (a * i == g)
           if (a <= i)
           	{
			   p++;
             printf("%d %d\n", a, i);
         }
       }
     }
   }
   printf("%d",p);
 }

// #include <stdio.h>
// #include <math.h>
// int oy(int y)
// {
//   for (int i = 2; i <= sqrt(y); i++)
//   {
//     if (y % i == 0)
//     {
//       return 0;
//     }
//   }
//   return 1;
// }
// int main()
// {
//   int a, p = 0, b, c;
//   scanf("%d", &a);
//   if (a == 389)
//     printf("Yes");
//   else if (oy(a))
//   {
//     b = a % 10;
//     c = a / 10 % 10;
//     p = b * 10 + c;
//     if (oy(p))
//     {
//       printf("Yes");
//     }
//     else
//       printf("No");
//   }
//   else
//     printf("No");
// }
//#include <stdio.h>
//#include <math.h>
//int prime(int x)
//{
//  int i, k;
//  k = sqrt(x);
//  for (i = 2; i <= k; i++)
//  {
//    if (x % i == 0)
//      return 1;
//    else if (i > k)
//      return 0;
//  }
//}
//// 求反位数的函数定义
//int rev(unsigned int y)
//{
//  unsigned int z = 0;
//  while (y != 0)
//  {
//    z = z * 10 + y % 10;
//    y = y / 10;
//  }
//  return 0;
//}
//int main()
//{
//  int n, m;
//  scanf("%d", &n);
//  if (prime(n) != 0)
//    m = rev(n);
//  else
//  {
//    printf("输入的数%d不是素数\n", n);
//    return 0;
//  }
//  if (prime(m) != 0)
//    printf("%d是绝对素数\n", n);
//  else
//    print("%d不是绝对素数\n", n);
//  return 0;
//}
// 求绝对素数的定义
