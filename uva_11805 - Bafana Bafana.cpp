#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,p,test_case,who,cont=0;
    cin>>test_case;
    while(test_case--)
    {
        cin>>n>>k>>p;
        who=(k+p);
        while(who>n)  {who-=n;}
        cout<<"Case "<<++cont<<": "<<abs(who)<<endl;
    }
}
