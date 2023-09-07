
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x,a,b;

    cin>>x>>a>>b;

    if(b<=a)
    {
        cout<<"delicious\n";
    }
    else if((b-a)<=x)
    {
        cout<<"safe\n";
    }
    else
    {
        cout<<"dangerous\n";
    }
    return 0;
}
