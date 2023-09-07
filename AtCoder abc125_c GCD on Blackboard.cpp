#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000000+10];
ll b[1000000+10];
ll c[1000000+10];

int main()
{
    ll n,mxx=0,i;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    b[0]=a[0];
    c[n-1]=a[n-1];

    for(i=1; i<n; i++)
    {
        b[i]=__gcd(a[i], b[i-1]);
    }

    for(i=n-2; i>=0; i--)
    {
        c[i]=__gcd(a[i],c[i+1]);
    }

    for(i=0; i<n; i++)
    {
        mxx = max(mxx,(__gcd(b[i-1],c[i+1])));
    }
    cout<<mxx<<endl;
    return 0;
}
