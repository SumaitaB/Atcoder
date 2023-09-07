
#include<bits/stdc++.h>
#define ll long long int
ll a[1000000+9];
using namespace std;
int main()
{
    ll n,i,j,x=0,c=0;
    cin>>n;
    set<ll>s;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<400)
        {
            s.insert(1);
        }
        else if(a[i]<800)
        {
            s.insert(2);
        }
        else if(a[i]<1200)
        {
            s.insert(3);
        }
        else if(a[i]<1600)
        {
            s.insert(4);
        }
        else if(a[i]<2000)
        {
            s.insert(5);
        }
        else if(a[i]<2400)
        {
            s.insert(6);
        }
        else if(a[i]<2800)
        {
            s.insert(7);
        }
        else if(a[i]<3200)
        {
            s.insert(8);
        }
        else if(a[i]>=3200)
        {
            x++;
        }
    }

    ll minn,maxx;

    if (s.size()==0)
    {
        minn=1;
    }
    else
    {
        minn=s.size();
    }
    maxx=s.size()+x;
    cout<<minn<<" "<<maxx<<endl;
    return 0;
}
