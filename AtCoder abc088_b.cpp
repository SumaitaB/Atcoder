
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a[100000+9],n,s=0,i,p=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }
    sort(a,a+n,greater<int>());
    for(i=0; i<n; i++)
    {

        if(i%2==0)
        {
            s+=a[i];
        }
        else
        {
            p+=a[i];
        }
    }
    cout<<s-p<<endl;
    return 0;
}
