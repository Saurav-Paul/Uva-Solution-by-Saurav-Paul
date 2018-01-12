#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int test_case,test,value,temp,n;
    double avg,abvavg,ara[5000];
    while(cin>>test_case)
    {
        for(test=0; test<test_case; test++)
        {

            avg=abvavg=0;
            cin>>n;
            for(value=0; value<n; value++)
            {
                cin>>ara[value];
                avg+=ara[value];
            }
            avg/=n;
            for(value=0; value<n; value++)
            {
                if(ara[value]>avg)
                {
                    abvavg++;
                }
            }
            abvavg=(abvavg*100)/n;
            printf("%.3lf",abvavg);
            cout<<"%"<<endl;
        }
    }
}
