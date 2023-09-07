
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string a;
    ll b[1000+9]= {0},f1=0,f2=0,i,c=0;
    cin>>a;
    for(i=0; i<a.length(); i++)
    {
        b[a[i]]++;
    }
    for(i=60; i<=100; i++)
    {
        if(b[i]==2)
        {
            f1=1;
            c=i;
            break;
        }
    }
    for(i=c+1; i<=100; i++)
    {
        if(b[i]==2)
        {
            f2=1;break;


        }
    }
    if(f1==1&&f2==1)
    {
        cout<<"Yes"<<endl;
    }  else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
