
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a[]= {1,3,5,7,8,10,12},b[]= {4,6,9,11},c=2,x[3],i;
    ll f1[3]= {0};
    ll f2[3]= {0},f3=0,j;
    cin>>x[0]>>x[1];
ll g1=0,g2=0;
    for(j=0; j<2; j++)
    {
        for(i=0; i<7; i++)
        {
            if(x[j]==a[i])
            {
                f1[j]=1;
                break;
            }
        }

    }
    if(f1[0]==1&&f1[1]==1)
    {
        g1=1;
    }
    for(j=0; j<2; j++)
    {
        for(i=0; i<4; i++)
        {
            if(x[j]==b[i])
            {
                f2[j]=1;
                break;
            }
        }

    }
       if(f2[0]==1&&f2[1]==1)
    {
        g2=1;
    }

    if((x[0]==c&&x[1]==c)||g1==1||g2==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
