
#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{

    ll n,i,o,e;
    double x;
    cin>>n;
    if(n%2==0)
    {
        o=n/2;
        e=n/2;
    }
    else if(n%2==1)
    {
        o=n/2 + 1;
        e=n/2;
    }
    //cout<<o<<endl;
    //cout<<e<<endl;

    x=(o*1.00)/n;
    cout<<fixed<<setprecision(10)<<x<<endl;

}
