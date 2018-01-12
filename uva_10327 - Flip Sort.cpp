#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[2000],cont,n,nflip,value;
    while(cin>>n)
    {
        for(value=0;value<n;value++)
            cin>>ara[value];
            nflip=0;
            cont=1;
        while(cont)
        {
            cont=0;
            for(value=1;value<n;value++)
            {
                if(ara[value-1]>ara[value])
                {
                    swap(ara[value-1],ara[value]);
                    cont++;
                    nflip++;
                }
            }
        }

        cout<<"Minimum exchange operations : "<<nflip<<endl;
    }
}
