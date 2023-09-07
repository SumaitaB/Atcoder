
#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ll a,b;
    cin>>a>>b;
    b=b*2;
    ll x = a - b;
    if(x<0)
    {
        x=0;
    }
    cout<<x<<endl;

}
