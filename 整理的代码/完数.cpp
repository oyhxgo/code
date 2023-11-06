#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d its factors are",a);
    for(int i=1;i<a;i++)
    {
            if(a%i==0)
                printf(" %d",i);
    }
    return 0;
}