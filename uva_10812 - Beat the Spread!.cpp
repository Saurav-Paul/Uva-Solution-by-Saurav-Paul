#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test_case,value,num_1,num_2,avg;
    bool check;
    cin>>test_case;
    for(value=0; value<test_case; value++)
    {
        cin>>num_1>>num_2;
        check=true;
        if(num_2>num_1)
            check=false;

        else
        {
            avg=(num_1+num_2);
            if(avg%2!=0)
            {
                check=false;
            }
            avg=avg>>1;
            num_2=num_1-avg;
            num_1=avg;
        }

        if(check)
        {
            cout<<num_1<<" "<<num_2<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }
    }
}
