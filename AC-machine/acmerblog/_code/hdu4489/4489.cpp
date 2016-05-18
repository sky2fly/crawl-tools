#include <iostream>
#include<stdio.h>
using namespace std;

__int64 dp[25][2],ans[25];
__int64 c[20][25],t;
int main()
{
    int i,j,cas,cs,n;

    c[1][1]=1;
    c[1][0]=1;
    for(i=2;i<=20;i++)//算组合数
    {
        c[i][0]=c[i][i]=1;
        for(j=1;j<i;j++)
          c[i][j]=c[i-1][j]+c[i-1][j-1];
    }
    dp[1][0]=dp[1][1]=dp[0][0]=dp[0][1]=1;//初始为1
    for(i=2;i<=20;i++)
    {
        t=0;//t记录总方法数
        for(j=0;j<i;j++)
        {
            t+=dp[j][0]*dp[i-j-1][1]*c[i-1][j];
        }
        dp[i][0]=dp[i][1]=t/2;
    }
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d%d",&cs,&n);
        if(n==1)
        {
            printf("%d 1\n",cs);
            continue;
        }
        printf("%d %I64d\n",cs,dp[n][0]<<1);
    }
    return 0;
}
/*
#include <iostream>
#include<stdio.h>
using namespace std;
__int64 ans[20]=
{1,2,4,10,32,122,544,2770,15872,101042,707584,5405530,
44736512,398721962LL,3807514624LL,38783024290LL,419730685952LL,4809759350882LL,
58177770225664LL,740742376475050LL};
int main()
{
    int t,c,n,cas=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&c,&n);
        printf("%d %I64d\n",cas++,ans[n-1]);
    }
}
*/
