#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string year;
long long value,temp;
int division(int);
int check,z=0;
int main()
{

    while(cin>>year)
    {

        if(z)
            cout<<endl;
        z=1;
    if((!division(4)) && ((division(100)) || (!division(400))))
    {

        printf("This is leap year.\n");
        if(!division(15))
            printf("This is huluculu festival year.\n");

        if(!division(55))
             printf("This is bulukulu festival year.\n");


    }
    else if(!division(15))
            printf("This is huluculu festival year.\n");

    else
        printf("This is an ordinary year.\n");

    }
    return 0;
}
int division(int divider)
{
    temp=(year[0]-'0')*10+(year[1]-'0');

    if(temp>=divider)
    {
        temp%=divider;
    }

    for(value=2; value<year.size(); value++)
    {

        temp=(temp*10)+(year[value]-'0');
        if(temp>=divider)
        {
            temp%=divider;
        }
    }
    return temp;
}
