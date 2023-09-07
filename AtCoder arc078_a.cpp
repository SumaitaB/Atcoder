
#include<bits/stdc++.h>
#define ll long long int
ll a[1000000+9];
using namespace std;
int main()
{
    ll n,i,s=0,r=0,x=99999999999999,d,total=0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        total+=a[i];
    }

    s=a[0];

    for(i=1; i<n; i++)
    {
        r=total-s;
        d=(s-r);
        if(d<0)
        {
            d*=-1;
        }
        x=min(x,d);
        s+=a[i];
    }
    cout<<x<<endl;
    return 0;
}
