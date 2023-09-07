
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll n,x,a=0,i;
    cin>>n;
    map<ll,ll> m;
    set<ll> s;
    map<ll,ll> :: iterator it;

    for(i=0; i<n; i++)
    {
        cin>>x;
        m[x]++;
        //s.insert(x);

    }

    for(it=m.begin(); it!=m.end(); it++)
    {
        if((it->first)<=(it->second))
        {
            a+=((it->second)-(it->first));
            //cout<<a<<endl;
        }
        else if((it->first)>(it->second))
        {
            a+=(it->second);
             //cout<<a<<endl;
        }
    }

    cout<<a<<endl;
    return 0;
}

