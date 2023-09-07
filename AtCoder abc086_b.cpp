
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a,b,p;
    string x,y;
    ll n;
    cin>>x>>y;
    x=x+y;
    stringstream g(x);
    a=0;
    g>>a;
    //cout<<a<<endl;
    n=sqrt(a);
    //cout<<n<<endl;
    p=n;
    p=p*p;
    if(a==p)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
