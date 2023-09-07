
#include<bits/stdc++.h>
#define ll long long int
//ll a[1000000+9]= {0};
using namespace std;
int main()
{
    ll n,i,j,k;
    ll m=0,a=0,r=0,c=0,h=0,res=0;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        if(s[0]=='M')
        {
            m++;
        }
        else if(s[0]=='A')
        {
            a++;
        }
        else if(s[0]=='R')
        {
            r++;
        }
        else if(s[0]=='C')
        {
            c++;
        }
        else if(s[0]=='H')
        {
            h++;
        }
    }

    res+=(m*a*r);
    res+=(m*a*c);
    res+=(m*a*h);
    res+=(m*r*c);
    res+=(m*r*h);
    res+=(m*c*h);
    res+=(a*r*c);
    res+=(a*r*h);
    res+=(a*c*h);
    res+=(r*c*h);

    cout<<res<<endl;

    return 0;
}
