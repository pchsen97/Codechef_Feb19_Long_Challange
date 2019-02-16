#include <bits/stdc++.h>
using namespace std;
typedef long int ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  string s;
	  cin>>s;
	  ll a[26];
	  memset(a,0,sizeof(a));
	  for(ll i=0;i<s.length();i++)
	  {
	      a[int(s[i])-65]++;
	  }
	  std::vector<ll> v;
	  for(int i=0;i<26;i++)
	  {
	      if(a[i]>0)
	      v.push_back(a[i]);
	  }
	  sort(v.begin(),v.end(),greater<ll>());
	  
	  ll tmp,mn=10000000;
	  for(int i=1;i<=26;i++)
	  {
	      if(s.length()>=i)
	      {
	          if(s.length()%i==0)
	            {
    	          ll diff=0,extra=0,ndiff=0,pdiff=0;
    	          if(i<=v.size())
    	          {
    	              for(int j=0;j<i;j++)
    	              {
    	                  diff+=labs(v[j]-(s.length()/i));
    	              }
    	              for(int j=i;j<v.size();j++)
    	              {
    	                  extra+=v[j];
    	              }
    	              tmp=(diff+extra)/2;
    	          }
    	          else
    	          {
    	              for(int j=0;j<v.size();j++)
    	              {
    	                  if(v[j]-(s.length()/i)<0)
    	                  ndiff+=labs((s.length()/i)-v[j]);
    	                  else
    	                  pdiff+=labs((s.length()/i)-v[j]);
    	              }
    	              extra=(s.length()/i)*(i-v.size());
    	              tmp=(extra+labs(ndiff-pdiff))/2;
    	          }
    	          if(mn>tmp)
    	            mn=tmp;
    	      }
	      }
	  }
	  cout<<mn<<"\n";
	}
	return 0;
}
