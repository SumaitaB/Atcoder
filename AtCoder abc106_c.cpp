
#include<bits/stdc++.h>
#define ll long long int
//ll a[1000000+9]= {0};
using namespace std;
int main()
{
    string a;
    ll k,i,p=0;
    cin>>a>>k;
    for(i=0; i<a.length(); i++)
    {
        if(a[i]!='1')
        {
            break;
        }
        else
        {
            p++;
        }
    }
//cout<<p<<endl;
    if(k<=p)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<a[p]<<endl;
    }
    return 0 ;
}
