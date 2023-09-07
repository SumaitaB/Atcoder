
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x,n,r,s=0;
    cin>>x;
    n=x;
    while(n)
    {
        r=n%10;
        s+=r;
        n=n/10;
    }
    if(x%s==0)
    {
        cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
