#include <iostream>
using namespace std;
typedef long int ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   ll n;
	   long long int s=0;
	   cin>>n;
	   ll tmp;
	   s-=n;
	   for(int i=0;i<n;i++)
	   {
	    cin>>tmp;
	    s+=tmp;
	   }
	   cout<<s+1<<"\n";
	   
	}
	return 0;
}
