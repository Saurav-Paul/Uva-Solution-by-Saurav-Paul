#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nbox,value,test=0,avg=0,netmove=0,box[1000];
    while(1)
    {
        cin>>nbox;
        avg=0;
        if(nbox==0)
        {
            break;
        }
        for(value=0; value<nbox; value++)
        {
            cin>>box[value];
            avg+=box[value];
        }

        avg/=nbox;
        for(value=0; value<nbox; value++)
        {
            if(box[value]>avg)
            {
                netmove+=(box[value]-avg);
            }
        }


        test++;

        printf("Set #%d\nThe minimum number of moves is %d.\n\n",test,netmove);
        netmove=0;

    }
    return 0;


}
