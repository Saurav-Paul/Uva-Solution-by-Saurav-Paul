#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void orginal_clock(int, int );
int main()
{
    int mhr,mminute,test_case;
    char ch;
    cin>>test_case;

    while(test_case--)
    {
        cin>>mhr>>ch>>mminute;
        orginal_clock(mhr,mminute);
    }

}
void orginal_clock(int mhr, int mminute)
{
    int hr,minute;
    if(mhr==12 || mhr==6)
    {
        hr=mhr;
    }
    else
    {
        hr=12-mhr;
    }
    if(mminute==0)
    {
        minute=mminute;
    }
    else
    {
        minute=60-mminute;
        hr--;
    }
    if(hr==0)
        hr=12;
    printf("%02d:%02d\n",hr,minute);
}
