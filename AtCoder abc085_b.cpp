
#include<bits/stdc++.h>
#define ll long long int
ll a[1000000+9];
using namespace std;
int main()
{
    ll n,i,j;
    cin>>n;
    set<ll>s;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    j=s.size();
    cout<<j<<endl;
}
