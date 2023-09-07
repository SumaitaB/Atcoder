
#include<bits/stdc++.h>
#define ll long long int
ll a[1000000+9];
using namespace std;
int main()
{
    ll n,t,d,i,x=0;
    cin>>n>>t;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for (i=1; i<n; i++)
    {
        d=a[i]-a[i-1];

        if (d<=t)
        {
            x+=d;
        }
        else
        {
            x+=t;
        }
    }
    cout<<x+t<<endl;
    return 0;
}
