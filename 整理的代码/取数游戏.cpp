//取数游戏
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int dp[50] = {0};
    dp[1] = 2;
    dp[2] = 3;
    for (int i = 3; i <= n; i++) 
	{
        dp[i] = dp[i - 1] + dp[i - 2];//在i时，我们取走第i个数，则剩下的取法为dp【i-1】，在此基础上我们还可以取i-2个数，因为相邻的不行，所以总共就是dp【i-1】+dp【i-2】
    }
    printf("%d", dp[n]);
    return 0;
}