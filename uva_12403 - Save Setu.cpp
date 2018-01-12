#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long test_case,total_amount=0,temp;
    char ch[50];
    cin>>test_case;
    int value;
    for(value=0; value<test_case; value++)
    {
        scanf("%s",ch);
        if(strcmp(ch,"report")==0)
        {
            cout<<total_amount<<endl;
        }
        else if(strcmp(ch,"donate")==0)
        {
            cin>>temp;

            if(temp>=100 && temp<=100000)
            {
                total_amount+=temp;
            }
        }
    }
}
