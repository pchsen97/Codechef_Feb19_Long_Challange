#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
ll mulinvr(ll x,ll y,ll m) 
{ 
    if(y==0) 
        return 1; 
    ll p=mulinvr(x,y/2,m)%m; 
    p=(p*p)%m; 
    if(y%2==0)
    return p;
    else
    return (x*p)%m; 
} 
ll pw(ll a,ll b)
{
    ll r=1;
    while(b>0) 
    { 
       if(b&1) 
        r=(r*a)%mod; 
        b=b>>1;
        a=(a*a)%mod;   
    } 
    return r;
}
ll summ(ll n,ll x,ll y)
{
    ll t1=0,c1=x,c2=1;
    while(n>0)
    {
        if(n&1)
        {
            t1=((t1*c1+c2))%mod;
        }
    c2=(((c1+1)*c2))%mod;
    c1=(c1*c1)%mod;
    n=n/2;
    }
    return t1;
}
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k,m;
        cin>>n>>k>>m;
        ll M=(m/2)+1;

        ll sixbysev,onebysev,onebysxtn,ltermodd,ltermeve;
        
        sixbysev= ((n-1)*mulinvr(n,mod-2,mod))%mod;
        
        onebysev= mulinvr(n,mod-2,mod);
        
        onebysxtn= mulinvr((n+k),mod-2,mod);
        
        ltermodd= (pw(n-1,M-1)*mulinvr(pw(n,M),mod-2,mod))%mod;
        
        ltermeve=(pw(n-1,M-1)*mulinvr((pw(n,M-1)*(n+k))%mod,mod-2,mod))%mod;
        

        ll ans=summ(M-1, sixbysev,onebysev);
        if(m&1)
        {
            cout<<((ans*onebysev +ltermodd)%mod)<<"\n";
        }
        else
        cout<<((ans*onebysev +ltermeve)%mod)<<"\n";
        
	}
	return 0;
}