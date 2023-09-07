
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll n,y,i,j,k,to=0,ten=-1,five=-1,thou=-1;

    cin>>n>>y;

    for(i=0; i<=n; i++)
    {
        for(j=0; i+j<=n; j++)
        {
            k=n-i-j;
            to=10000*i+5000*j+1000*k;

            if(to==y)
            {
                ten=i;
                five=j;
                thou=k;
            }
        }
    }
    cout<<ten<<" "<<five<<" "<<thou<<endl;
}
