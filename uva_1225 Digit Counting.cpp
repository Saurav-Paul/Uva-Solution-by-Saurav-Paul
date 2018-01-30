#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int test_case,num,value,test,digit[10],n;
main()
{
    cin>>test_case;
    while(test_case--)
    {
        cin>>num;
        for(value=1; value<=num; value++)
        {
            n=value;
            while(n>0)
            {
                test=n%10;
                digit[test]++;
                n/=10;
            }
        }
        for(value=0; value<10; value++)
        {
            cout<<digit[value];
            if(value!=9)
                cout<<" ";
            digit[value]=0;
        }
        cout<<endl;

    }
    return 0;
}
