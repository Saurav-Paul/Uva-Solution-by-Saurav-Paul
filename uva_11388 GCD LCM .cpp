#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
long long test_case,gcd,lcm;
cin>>test_case;
while(test_case--){
        cin>>gcd>>lcm;
    if(lcm%gcd==0)
        cout<<gcd<<" "<<lcm<<endl;
    else
        cout<<"-1"<<endl;
}
return 0;
}
