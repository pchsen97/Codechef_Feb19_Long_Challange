#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ans=0;
	    cin>>n;
	    int a[26];
	    for(int i=0;i<26;i++)
	    a[i]=0;
	    for(int j=0;j<n;j++)
	    {
	        string s;
	        cin>>s;
	        for(int i=0;i<s.length();i++)
	        {
	            if(a[int(s[i])-97]==j)
	            a[int(s[i])-97]++;
	        }
	    }
	    for(int i=0;i<26;i++)
	    {
	        if(a[i]==n)
	        ans++;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
