#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,sqrmtr,animal,envfrnd,sum,value,n,test;
    while(scanf("%d",&test_case)!=EOF)
    {
        for(test=0;test<test_case;test++){
        sum=0;
        cin>>n;
        for(value=0;value<n;value++)
        {
           cin>>sqrmtr>>animal>>envfrnd;
           sum+=(sqrmtr*envfrnd);
        }
        cout<<sum<<endl;
        }
    }
}
