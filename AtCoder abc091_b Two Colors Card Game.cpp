
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m,i,j;
    cin>>n;
    string a;
    map<string,ll>ma;
    map<string,ll>:: iterator it;
    for(i=0; i<n; i++)
    {
        cin>>a;
        ma[a]++;
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>a;
        ma[a]--;
    }
    ll x=-999999999999;
    for(it=ma.begin(); it!=ma.end(); it++)
    {
        x=max(x,it->second);
    }
    if(x<0)
    {
        cout<<0<<endl;
    }
    else{
    cout<<x<<endl;}
    return 0;
}
