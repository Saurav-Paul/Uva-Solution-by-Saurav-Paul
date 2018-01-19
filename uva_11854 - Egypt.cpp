#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,temp,test;

    while(cin>>a>>b>>c)
    {

        if(a==0 && b== 0 && c==0)
            break;
        if(a>=b && a>=c)
        {
            temp=a;
            test=b*b+c*c;
        }
        else if (b>=a && b>=c)
        {
            temp=b;
            test=a*a+c*c;
        }
        else
        {
            temp=c;
            test=a*a+b*b;
        }
        temp*=temp;
        if(temp==test)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
}
