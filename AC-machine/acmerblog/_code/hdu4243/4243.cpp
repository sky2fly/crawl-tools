#include<iostream>
using namespace std;
long long t,n,cas,k;
long long ans;
long long tmp1,tmp2,tmp3;
long  long  f(long long a)
{
	if(a==1||a==0) return 1;
	else return f(a-1)*a;
}
int main()
{
	cin>>t;
	while(t--){
		cin>>cas>>n>>k;
		if(k==1) ans=f(n-1);
		else{
			ans=0;
			for(int i=1;i<=k-1;i++){
				tmp1=f(k-2);
				tmp2=f(k-1-i);
				tmp3=f(n-i-1);
				ans+=tmp1/tmp2*i*tmp3;
			}			
		}
		cout<<cas<<" "<<ans<<endl;
	}
}