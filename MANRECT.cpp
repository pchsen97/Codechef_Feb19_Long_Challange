#include <iostream>
using namespace std;
typedef long int ll;
#define m 1000000000
void chk(ll a)
{
    if(a<0)
    exit(0);
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  ll p,q,r,s,u,v;
	  cout<<"Q"<<" "<<0<<" "<<0<<endl<<flush;
	  cin>>p;
	  chk(p);
	  cout<<"Q"<<" "<<m<<" "<<0<<endl<<flush;
	  cin>>q;
	  chk(q);
	  cout<<"Q"<<" "<<m<<" "<<m<<endl<<flush;
	  cin>>r;
	  chk(r);
	  cout<<"Q"<<" "<<0<<" "<<m<<endl<<flush;
	  cin>>s;
	  chk(s);
	  cout<<"Q"<<" "<<(p-q+m)/2<<" "<<0<<endl<<flush;
	  cin>>u;
	  chk(u);
	  ll xl,yl,xr,yr;
      		xl=p-u;
      		yl=u;
      		xr=m+yl-q;
      		yr=m+xl-s;
	  cout<<"A"<<" "<<xl<<" "<<yl<<" "<<xr<<" "<<yr<<endl<<flush;
	  cin>>v;
	  chk(v);
	}
	return 0;
}