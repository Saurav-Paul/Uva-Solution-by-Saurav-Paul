#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long  ara[2000000],cont,n,value;
int main()
{

    while(cin>>n && n!=0)
    {

        for(value=0;value<n;value++)
           cin>>ara[value];

          sort(ara,ara+n);
        for(value=0;value<n;value++)
           {
            cout<<ara[value];
            if(value!=n-1)
                cout<<" ";
           }



        cout<<endl;
    }
}
