#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num_1,num_2;
    int carry,n1,n2;
    while(1)
    {
        cin>>num_1>>num_2;
        carry=0;
        if(num_1==0 && num_2==0)
        {
            break;
        }

        while(num_1!=0 || num_2!=0)
        {
            n1=num_1%10;
            n2=num_2%10;

            if(n1+n2>9)
            {
                carry++;
            }


            num_1/=10;
            num_2/=10;

        }
        if(carry==0)
        {
            cout<<"No carry operation."<<endl;
        }
        else if(carry==1)
        {
            cout<<"1 carry operation."<<endl;
        }

        else
        {
            cout<<carry<<" carry operations."<<endl;
        }

    }
    return 0;
}
