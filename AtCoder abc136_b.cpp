
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,i,j,s=0,c=0,r;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        j=i;
        if(i>=1&&i<=9)
        {
            c++;
        }
        else
        {
            while(j)
            {
                r=j%10;
                s++;
                j=j/10;
            }
        }
        if(s%2==1)
        {
            c++;
        }
        s=0;
    }
    cout<<c<<endl;
    return 0;
}
