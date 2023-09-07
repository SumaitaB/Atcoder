#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n,a[100],b[100],i,c=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            c++;
        }
    }
    if(c==2||c==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
       cout<<"NO"<<endl;
    }
    return 0;

}
