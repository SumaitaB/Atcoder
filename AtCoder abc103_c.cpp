
#include<bits/stdc++.h>
#define ll long long int
ll a[1000000+9]= {0};
using namespace std;
int main()
{
    ll n,k,j,i;
    cin>>n;
    ll s=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    cout<<s-n<<endl;
    return 0;
}
