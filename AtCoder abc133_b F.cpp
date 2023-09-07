
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,d,i,j,cnt=0,s=0,a[100][100],x,k;

    cin>>n;
    cin>>d;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=d; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1; i<=n-1; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            for(k=1; k<=d; k++)
            {
                s+=((a[i][k]-a[j][k])*(a[i][k]-a[j][k]));
            }
            x=sqrt(s);
            if(s==(x*x))
            {
                cnt++;
            }
            s=0;
        }
    }

    cout<<cnt<<endl;
    return 0;
}
