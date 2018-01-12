#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,n;
    bool check;
    cout<<"Enter a number : ";
    while(cin>>num)
    {
        check=false;
        n=sqrt(num+1);
        if(num<2) check=true;
        else if (num==2) check=false;
        else
            for(int value=1; value<n+1; value+=2)
                if(num%value==0)
                    check=true;
        if(check==true)
            cout<<num<<" is not Prime Number.\n"<<endl;
        else
            cout<<num<<" is Prime Number.\n"<<endl;
        cout<<"Enter a number : ";
    }
}
