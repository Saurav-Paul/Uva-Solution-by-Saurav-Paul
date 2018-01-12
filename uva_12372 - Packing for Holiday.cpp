#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int test_case,len,wid,height,value;
    cin>>test_case;
    for(value=0;value<test_case;value++)
    {
        cin>>len>>wid>>height;
        if(len<21 &&wid<21 && height<21)
        {
            cout<<"Case "<<value+1<<": good"<<endl;
        }
        else{
          cout<<"Case "<<value+1<<": bad"<<endl;
        }
    }
}
