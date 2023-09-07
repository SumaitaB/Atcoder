
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int x[100000+9][5];
int main()
{
    int n,i,j,p;

    cin>>n;
    vector<int>a(n),b(n),c(n);
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
//    for(i=1;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            x[i][j]=0;
//        }
//    }
    x[0][0]=a[0],x[0][1]=b[0],x[0][2]=c[0];
    for(i=1; i<n; i++)
    {
        x[i][0]= max(x[i-1][1],x[i-1][2]);
        x[i][0]+=a[i];

        x[i][1]= max(x[i-1][0],x[i-1][2]);
        x[i][1]+=b[i];

        x[i][2]= max(x[i-1][1],x[i-1][0]);
        x[i][2]+=c[i];
    }

    p=max((max(x[n-1][0],x[n-1][1])),x[n-1][2]);
    cout<<p<<endl;

}
