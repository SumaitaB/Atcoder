
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a[100000+9],n,i,x=-99999999,s=0,p=0;
  cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    p=a[n-1]/2;
    s=s-p;
    cout<<s<<endl;
}
