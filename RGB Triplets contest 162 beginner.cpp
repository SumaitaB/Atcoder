#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,r=0,g=0,b=0,ans=0,x,i,j;
    string s;
    cin>>n;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='R')
        {
            r++;
        }
        else if(s[i]=='G')
        {
            g++;
        }
        else if(s[i]=='B')
        {
            b++;
        }
    }
    ans=r*g*b;

    for (i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(2*j-i<n)
            {
                if(s[2*j-i]!=s[i]&&s[i]!=s[j]&&s[2*j-i]!=s[j])
                {
                    ans--;
                }
            }
        }

    }

    cout<<ans<<endl;
    return 0;
}
