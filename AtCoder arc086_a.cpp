
#include<bits/stdc++.h>
#define ll long long int
ll v[1000000+9];
using namespace std;
int main()
{
    ll i,j,ans=0,x,p,n,k;

    map<ll,ll>m;
    map<ll,ll> :: iterator it;

    cin>>n>>k;

    for(i=0; i<n; i++)
    {
        cin>>p;
        m[p]++;
    }

    x=m.size();
    //cout<<x<<endl;
    if(x<=k)
    {
        cout<<0<<endl;
    }
    else
    {

        j=0;
        for(it=m.begin(); it!=m.end(); it++)
        {
            v[j]=it->second;
            j++;
        }
        x=m.size();
        sort(v,v+x);

        ll s=m.size()-k;

        for(i=0; i<s; i++)
        {
            ans+=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
