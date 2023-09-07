#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n,i,j;
    string s;
    ll cnt = 0;

    cin>>n>>s;

    for( i=0; i<n; i++)
    {
        if(s[i]=='A'&& s[i+1]=='B'&&s[i+2]=='C')
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;

}
