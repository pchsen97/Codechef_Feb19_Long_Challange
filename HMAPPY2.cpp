#include <iostream>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b) 
{ 
    if(a==0) 
        return b; 
    return gcd(b%a,a); 
}

ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,a,b,k;
	    cin>>n>>a>>b>>k;
	    if(a==b)
	    cout<<"Lose"<<"\n";
	    else
	    {
	        ll na=(n/a);
	        ll nb=(n/b);
	        ll nab=(n/lcm(a,b));
	        if(na+nb-2*nab>=k)
	        cout<<"Win"<<"\n";
	        else
	        cout<<"Lose"<<"\n";
	    }
	}
	return 0;
}
