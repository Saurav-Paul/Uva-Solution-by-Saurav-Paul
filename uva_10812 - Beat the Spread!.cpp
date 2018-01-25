#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test_case,num1,num2,res1,res2,temp;
    cin>>test_case;
    while(test_case--)
    {
        cin>>num1>>num2;
        temp=num1+num2;
        if(temp%2!=0)
            cout<<"impossible"<<endl;
        else{
            res1=temp/2;
            res2=num1-res1;
            if(res2<0)
              cout<<"impossible"<<endl;
            else
            cout<<res1<<" "<<res2<<endl;
        }
    }
}
