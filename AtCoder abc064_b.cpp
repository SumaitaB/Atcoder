
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
    sort(a,a+n);
    cout<<a[n-1]-a[0]<<endl;

    return 0;
}

