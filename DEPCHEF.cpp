#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        int mx=0,max=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(a[n-1]+a[1]<b[i])
                max=b[i];
            }
            else if(i==n-1)
            {
                if(a[n-2]+a[0]<b[i])
                max=b[i];
            }
            else
            {
                if(a[i-1]+a[i+1]<b[i])
                max=b[i];
            }
            if(mx<max)
            mx=max;
        }
        if(max==0)
        cout<<-1<<"\n";
        else
        cout<<mx<<"\n";
	}
	return 0;
}
