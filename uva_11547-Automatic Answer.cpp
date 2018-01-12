#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    long long n,test_case;
    int value;
    cin>>test_case;
    for(value=0;value<test_case;value++)
    {
        cin>>n;
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n/=10;
        cout<<abs(n%10)<<endl;
    }
    return 0;
}
