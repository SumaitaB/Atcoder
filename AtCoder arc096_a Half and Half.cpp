
#include<bits/stdc++.h>
#define ll long long int
//ll a[1000000+9]= {0};
using namespace std;
int main ()
{
    ll a,b,c,x,y,p,mn,sum=0,mx;
    cin>>a>>b>>c>>x>>y;
    p=2*c;
    if (p<(a+b))
    {
        mn=min(x,y);
        mx=max(x,y);
        sum=mn*p;
        if(mn==y)
        {
            sum+=(x-mn)*a;
        }
        else
        {
            sum+=(y-mn)*b;
        }
        if(sum>(p*mx))
        {
            sum=p*mx;
        }
    }
    else
    {
        sum=(x*a)+(y*b);
    }
    cout<<sum<<endl;
    return 0;
}
