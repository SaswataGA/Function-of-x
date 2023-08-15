#include<stdio.h>
int main()
{
    int p,dp;
    scanf("%d",&p);
    dp= pow(p,2)-20*p+125;
    printf("p=%d and d(p)=%d\n",p,dp);
}

