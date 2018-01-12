#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int sum,temp;
long long int add(long long int n);

int main()
{
    long long int n,s;
    while(cin>>n && n!=0)
    {
        s=add(n);
        while(s>9)
        {
            sum=0;
            temp=0;
            s=add(s);

        }
        cout<<s<<endl;
        sum=0;
        temp=0;
    }
}

long long int add(long long int n)
{
    sum+=temp;

    if(n==0) return sum;

    else
    {

        temp=n%10;
        return add(n/10);
    }
}
