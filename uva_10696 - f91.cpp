#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int f91(long long int n);

int main()
{
    long long int n,f;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        f=f91(n);
        printf("f91(%lld) = %lld\n",n,f);
    }
}

long long int f91(long long int n)
{
    if (n>=101)
    {
        return n-10;
    }
    else
    {
        return f91(f91(n+11));
    }
}
