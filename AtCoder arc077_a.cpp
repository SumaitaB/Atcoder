
#include<bits/stdc++.h>
#define ll long long int
ll a[1000000+9];
using namespace std;
int main()
{
    ll n,i;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll x=n-1;
    if(n==1)
    {
        cout<<a[0]<<endl;
    }
    else if(n%2==0)
    {
        for(i=1; i<=n/2; i++)
        {
            cout<<a[x]<<" ";
            x=x-2;
        }
        x=0;
        for(i=1; i<=n/2; i++)
        {
            if(x<n-2)
                cout<<a[x]<<" ";
            else if(x==n-2)
                cout<<a[x]<<endl;
            x=x+2;
        }
    }
    else if(n%2==1)
    {
        for(i=1; i<=(n+1)/2; i++)
        {
            cout<<a[x]<<" ";
            x=x-2;
        }
        x=1;
        for(i=1; i<=n/2; i++)
        {
            if(x<n-2)
                cout<<a[x]<<" ";
            else if(x==n-2)
                cout<<a[x]<<endl;
            x=x+2;
        }
    }
    return 0;
}
