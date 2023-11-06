/*#include <stdio.h>
#include <math.h>
int main()
{
  double tSum = 0, tItem = 0; // tSum：求和（和即sin的值）， tItem：每一项
  double a;                   // a:输入的sin值
  int k = 1, n;               // k=1；
  scanf("%lf %d", &a, &n);
  tItem = a;                   // 输入的角度等于第一项
  for (int i = 1; i <= n; i++) // 循环我们输入的次数
  {
    tSum += tItem; // 和等于每一项相加
    k += 1;        // 式子的右下标，k++
    tItem = (-1) * tItem * a * a / (2 * (k - 1) * (2 * k - 1));
    // 原式为：下一项 = (-1) * 上一项 *    x    *   x     / (2*(k-1) * (2 * k - 1))
  } // 比如
  printf("sin(%lf)= %.2lf", a, tSum);
  return 0;
}*/
