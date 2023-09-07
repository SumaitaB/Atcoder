
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll a,b,c,d,i,j;
    string s;
    cin>>s;
       //ll t=a+b+c+d;

    a=s[0]-48;
    b=s[1]-48;
    c=s[2]-48;
    d=s[3]-48;

    if((a+b+c+d)==7)
    {
        cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"=7"<<endl;
    }
    else if((a-b-c-d)==7)
    {
        cout<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"=7"<<endl;
    }

    else if((a+b+c-d)==7)
    {
        cout<<a<<"+"<<b<<"+"<<c<<"-"<<d<<"=7"<<endl;
    }
    else if((a+b-c+d)==7)
    {
        cout<<a<<"+"<<b<<"-"<<c<<"+"<<d<<"=7"<<endl;
    }
    else if((a-b+c+d)==7)
    {
        cout<<a<<"-"<<b<<"+"<<c<<"+"<<d<<"=7"<<endl;
    }


    else if((a-b+c-d)==7)
    {
        cout<<a<<"-"<<b<<"+"<<c<<"-"<<d<<"=7"<<endl;
    }
    else if((a-b-c+d)==7)
    {
        cout<<a<<"-"<<b<<"-"<<c<<"+"<<d<<"=7"<<endl;
    }
    else if((a+b-c-d)==7)
    {
        cout<<a<<"+"<<b<<"-"<<c<<"-"<<d<<"=7"<<endl;
    }

    return 0;
}

