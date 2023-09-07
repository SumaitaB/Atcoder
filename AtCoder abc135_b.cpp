
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,a[100000+9],b[100000+9]= {0},i,j,f=0,c=0;
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
            f=1;
            c++;
        }
    }

    if(f==0)
    {
        cout<<"YES"<<endl;
    }
    else if(f==1)
    {
        if(c==2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
