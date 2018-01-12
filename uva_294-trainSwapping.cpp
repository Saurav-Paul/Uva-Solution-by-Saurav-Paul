#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,ara[1000],train,nswap,value,test,j;
    cin>>test_case;
    for(value=0; value<test_case; value++)
    {
        cin>>train;
        nswap=0;
        for(test=0; test<train; test++)
        {
            cin>>ara[test];
        }
        for(test=0; test<train; test++)
        {
            for(j=test+1; j<train; j++)
            {
                if(ara[test]>ara[j])
                {
                    swap(ara[test],ara[j]);
                    nswap++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<nswap<<" swaps."<<endl;
    }
}
