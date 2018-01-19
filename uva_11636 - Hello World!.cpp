#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long cont=1,num,paste,sum;
    while(cin>>num && num>-1)
    {
        sum=1;
        for(paste=0; sum<num; paste++)
        {
            sum+=sum;

        }
        cout<<"Case "<<cont++<<": "<<paste<<endl;
    }
}
