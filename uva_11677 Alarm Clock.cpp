#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hr,min,ahr,amin,minute,value,test;
    while(cin>>hr>>min>>ahr>>amin)
    {
        if(hr==0 && min==0 && ahr==0 && amin==0)
        {
            break;
        }
        minute=0;
        if(ahr<hr)
            ahr+=24;
        if(ahr==hr && amin<min)
            ahr+=24;
        for(value=hr; value<=ahr; value++)
        {
            for(test=min; test<60; test++)
            {
                if(value==ahr && test==amin)
                    break;
                minute++;
            }
            min=0;
        }
        cout<<minute<<endl;
    }
}
