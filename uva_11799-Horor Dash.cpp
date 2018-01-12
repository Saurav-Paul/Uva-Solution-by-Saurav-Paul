#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test_case,miximum,n,cont=0,num;
    cin>>test_case;
    while(test_case--)
    {
        cin>>n;
        miximum=0;
        while(n--)
        {
            cin>>num;
            if(num>miximum) miximum=num;
        }
        cout<<"Case "<<++cont<<": "<<miximum<<endl;
    }
}
