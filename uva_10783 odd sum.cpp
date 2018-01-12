#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int st,sp,sum,test_case,cont=1;
    cin>>test_case;
    while(test_case--)
    {
        cin>>st>>sp;
        sum=0;
        if(st%2==0) st+=1;
        for(; st<=sp; st+=2)
            sum+=st;

        cout<<"Case "<<cont++<<": "<<sum<<endl;
    }
}
