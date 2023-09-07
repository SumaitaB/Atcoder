
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll a,b,k,i,j,x,p,c=0;
    vector<ll> v;
    cin>>a>>b>>k;
    x=k;
    for(i=a; i<=b; i++)
    {
        x--;
        cout<<i<<endl;
        p=i;
        ;
        if(x==0)break;
    }
    x=k;
    for(i=b; i>=a; i--)
    {
        x--;
        if(p==i){break;}
        v.push_back(i);
        //v[c]=i;
        //c++;
        if(x==0){break;}
    }

    sort(v.begin(),v.end());

    for(i=0; i<v.size(); i++)
    {

        cout<<v[i]<<endl;
    }

    return 0;
}
