#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,sum,test,value;
    cout<<"PERFECTION OUTPUT\n";
    while(cin>>num)
    {
        sum=0;
        if(num==0)
        {
           cout<<"END OF OUTPUT\n";
           break;
        }
        for(value=1;value<num;value++)
        {

            if(num%value==0)
            {
                sum+=value;

            }
        }
        if(sum==num)
        {
            printf("%5lld  PERFECT\n",num);
            continue;
        }
        if(sum<num)
        {
            printf("%5lld  DEFICIENT\n",num);
            continue;
        }
        if(sum>num)
        {
            printf("%5lld  ABUNDANT\n",num);
            continue;
        }

    }
}
