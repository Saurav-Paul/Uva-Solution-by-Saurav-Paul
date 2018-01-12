#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    long long int test_case,value,namp,nfeq,feq,amp,test;
    cin>>test_case;
    for(value=0; value<test_case; value++)
    {
        cin>>amp;
        //cout<<endl;
        cin>>feq;
        for(nfeq=0; nfeq<feq; nfeq++)
        {
            for(namp=1; namp<=amp; namp++)
            {
                for(test=0; test<namp; test++)
                    cout<<namp;

                cout<<endl;
            }

            for(namp=amp-1; namp>=1; namp--)
            {
                for(test=namp; test>0; test--)
                    cout<<namp;

                cout<<endl;
            }
            if(nfeq!=feq-1)
                cout<<endl;
        }
        if(value!=test_case-1)
            cout<<endl;
    }
}
