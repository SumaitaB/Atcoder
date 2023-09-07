
#include<bits/stdc++.h>
#define ll long long int
ll a[1000000+9]= {0},b[1000000+9]= {0};
using namespace std;
int main ()
{
    ll n,ans=0,i;

    cin>>n;
    a[0]=0;
    b[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }

    for(i=1; i<=n; i++)
    {
        cin>>b[i];
        b[i]+=b[i-1];
    }
    //cout<<a[n]<<endl;
    //cout<<b[n]<<endl;
    ll p,x;
    for(i=1; i<=n; i++)
    {
        x=(b[n]-b[i-1]);
        p=a[i]+x;
        ans=max(ans,p);
    }
    cout<<ans<<endl;
    return 0;
}
