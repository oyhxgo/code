#include<stdio.h>
int main()
{
    int a;
    for(int i=1;i<=10000;i++)
    {
        if(i%5==1&&i%6==5&&i%7==4&&i%11==10)
        {
            a=i;
            break;
        }
    }
    printf("%d",a);
    
}