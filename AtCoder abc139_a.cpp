
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    ll c=0;
    for(ll i=0;i<a.length();i++)
    {
        if(a[i]==b[i])
        {
            c++;
        }
    }
    cout<<c<<endl;
}
