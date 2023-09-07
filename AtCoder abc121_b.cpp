
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll n,m,c,i,j,cnt=0,x;
    cin>>n>>m>>c;
    vector<ll>a;
    vector<ll>b;
    for(i=0; i<m; i++)
    {
        cin>>x;
        b.push_back(x);
    }
    ll s=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>x;
            a.push_back(x);
            s+=a[j]*b[j];
        }
        s+=c;
        if(s>0)
        {
            cnt++;
        }
        a.clear();
        s=0;
    }
    cout<<cnt<<endl;
    return 0;

}
