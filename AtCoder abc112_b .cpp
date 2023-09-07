
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,t,p,x,i,maxx=999999999;
    map<ll,ll>m;
    map<ll,ll>::iterator it;
    cin>>n>>t;
    for(i=0; i<n; i++)
    {
        cin>>p>>x;
        if(x<=t)
        {
            m.insert(make_pair(p,x));
        }
    }
    x=m.size();
    if(x>0)
    {
        for(it=m.begin(); it!=m.end(); it++)
        {
            maxx=min(maxx,it->first);
        }
        cout<<maxx<<endl;
    }
    else
    {
        cout<<"TLE"<<endl;
    }


}
