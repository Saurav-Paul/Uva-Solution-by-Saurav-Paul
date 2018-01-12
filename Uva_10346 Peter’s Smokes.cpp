#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m_cig,cig,butt,new_cig,total_new_cig,how_left_butt;
    while(scanf("%lld%lld",&m_cig,&butt)!=EOF)
    {
        total_new_cig=0;
        cig=m_cig;
        while(cig>=butt)
        {
            new_cig=cig/butt;
            how_left_butt=cig%butt;
            cig=new_cig+how_left_butt;
            total_new_cig+=new_cig;
        }
        cout<<total_new_cig+m_cig<<endl;
    }
}
