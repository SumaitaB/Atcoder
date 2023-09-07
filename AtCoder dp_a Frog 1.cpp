
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,i,p,x,y;
    cin>>n;
    vector<int>v(n),h(n);
    for(i=0; i<n; i++)
    {
        cin>>h[i];
    }
    v[0]=0;
    v[1]=abs(h[1]-h[0]);
    for(i=2; i<n; i++)
    {
        x=abs(h[i]-h[i-2])+v[i-2];
        y=abs(h[i] - h[i-1])+v[i-1];
        v[i]=min(x,y);
    }
    cout<<v[n-1]<<endl;

    return 0;
}
