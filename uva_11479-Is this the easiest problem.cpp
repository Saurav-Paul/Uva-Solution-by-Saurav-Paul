#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test_case,a,b,c,cont=0;
    cin>>test_case;
    while(test_case--)
    {
        cin>>a>>b>>c;
        if(a+b<=c ||b+a<=c || a+c<=b ||a<=0 || b<=0 || c<=0)
        {
            cout<<"Case "<<++cont<<": Invalid"<<endl;
        }
        else if(a==b && b==c)
        {
            cout<<"Case "<<++cont<<": Equilateral"<<endl;
        }
        else if(a==b || b==c || a==c)
        {
            cout<<"Case "<<++cont<<": Isosceles"<<endl;
        }
        else
        {
            cout<<"Case "<<++cont<<": Scalene"<<endl;
        }
    }

}
