#include"iostream"
#include"cstdio"
#include"cstring"
using namespace std;
const int N=1000006;

int n,num[N],ans;
int main()
{
    int i,l;
    int p,acc,sum,cnt;
    while(scanf("%d",&n),n)
    {
        sum=0;
        for(i=0;i<n;i++){scanf("%d",&num[i]);sum+=num[i];}
        if(sum<0)    {printf("0\n");continue;}

        p=n-1;
        ans=cnt=sum=0;
        while(cnt<=p)
        {
            sum+=num[cnt++];
            while(sum<0)    sum+=num[p--];
        }
        acc=0;
        while(p>=0)
        {
            if(acc>=0)        ans++;
            if(acc<0)        acc+=num[p];
            else if(num[p]<0)    acc=num[p];
            p--;
        }
        printf("%d\n",ans);
    }
    return 0;
}