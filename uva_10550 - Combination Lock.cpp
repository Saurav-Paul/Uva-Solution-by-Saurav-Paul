#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int fp,sp,tp,lp,degree,total_degree;
    while(cin>>fp>>sp>>tp>>lp)
    {
        if(fp==0&& sp==0 && tp==0 && lp==0)
        {
            break;
        }
        total_degree=360*2;
        degree=(fp-sp);
        if(degree<0)
            {degree+=40;}
        degree*=9;
        total_degree+=360;
        total_degree+=degree;
        degree=(tp-sp);
        if(degree<0)
            {degree+=40;}
        degree*=9;
        total_degree+=degree;
        degree=(tp-lp);
        if(degree<0)
            {degree+=40;}
        degree*=9;
        total_degree+=degree;
        cout<<total_degree<<endl;
    }
}
