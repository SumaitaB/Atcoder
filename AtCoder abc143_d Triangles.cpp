#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1000000+10];
int main()
{

    string s;
    ll n,cnt=0,i,j,k,x;


    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);


    for(i=0; i<n-2; i++)
    {

        for(j=i+1; j<n-1; j++)
        {

            for(k=j+1; k<n; k++)
            {
                x=a[i]+a[j];
                if(x>a[k])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }

    }

    cout<<cnt<<endl;



    return 0;
}
