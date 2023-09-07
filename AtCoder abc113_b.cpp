
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll i,j,n,d,x,t,a;
    double p,minn=999999999999999;
    cin>>n>>t>>a;
    for(i=0; i<n; i++)
    {
        cin>>x;
        p=t-(x*.006);
        p=abs(a-p);
        if(p<minn)
        {
            minn=p;
            d=i;
        }
    }
    cout<<d+1<<endl;
    return 0;
}
