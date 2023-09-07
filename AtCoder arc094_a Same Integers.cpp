
#include<bits/stdc++.h>
#define ll long long int
ll a[1000000+9]= {0};
using namespace std;
int main ()
{
    ll i,j,p;
    ll s;
    for(i=0; i<3; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+3);
    s = 2*a[2];
    s-=a[0];
    s-=a[1];
    if (s%2==0)
    {
        p=0;
    }
    else
    {
        p=2;
    }
    p+=(s/2);
    cout<<p<<endl;
    return 0;
}
