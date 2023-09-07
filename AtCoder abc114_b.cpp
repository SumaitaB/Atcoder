
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string a,b;
    ll m=999999999999999,i,j,p,u;
    cin>>a;
    for(i=0; i<(a.length()-2); i++)
    {
        b=a.substr(i,3);
        stringstream g(b);
        ll x=0;
        g>>x;
        p=abs(x-753);
        m=min(p,m);
        b.clear();

    }
    cout<<m<<endl;
    return 0;

}
