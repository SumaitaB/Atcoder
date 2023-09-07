
#include<bits/stdc++.h>
#define ll long long int
ll a[1000000+9];
using namespace std;
int main()
{
    ll n,i,cnt=0;;

    cin>>n;
    ll x=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==1)
        {
            x=1;
        }
    }
    if(x==1)
    {
        cout<<0<<endl;
    }
    else
    {
        ll f=0;
        while(1)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]%2==0)
                {
                    a[i]=a[i]/2;
                }
                else if(a[i]%2==1)
                {
                    f=1;
                    break;
                }
            }
            cnt++;
            if(f==1)break;
        }
        cout<<cnt-1<<endl;
    }
    return 0;
}
