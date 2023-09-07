
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a[100000+9],n,i,s=0,p=999999999999,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=1; i<=100; i++)
    {
        s=0;
        for(j=0; j<n; j++)
        {
         s+=((a[j]-i)*(a[j]-i));
        }
        //cout<<i<<"  "<<s<<endl;
       p=min(p,s);
    }
cout<<p<<endl;
    return 0;
}
