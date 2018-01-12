#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int ara[1000][1000],i,j,value,test,sqr;
    while(cin>>sqr)
    {
        i=j=sqr;
        for(value=0;value<sqr;value++)
        {
            for(test=0;test<sqr;test++)
            {
                cin>>ara[value][test];
            }
        }
    }
}
