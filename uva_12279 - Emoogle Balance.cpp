#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test_case,treat,not_treat,value,temp,case_num=1;
    while(cin>>test_case)
    {

        if(test_case==0)
        {
            break;
        }
        treat=0;
        not_treat=0;

        for(value=0; value<test_case; value++)
        {
            cin>>temp;
            if(temp==0)
            {
                treat++;
            }
            else
            {
                not_treat++;
            }
        }
        cout<<"Case "<<case_num++<<": "<<not_treat-treat<<endl;

    }
}
