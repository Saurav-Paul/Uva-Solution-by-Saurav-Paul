#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double hour,minute,degree,test,hdegree,mdegree,temp;
    char colon;
    while(cin>>hour>>colon>>minute && (hour!=0 || minute!=0))
    {
        if(hour==12)
        {
            hour=0;
        }
        hour*=30;
        minute*=6;
        hour+=((minute*30)/360);
        degree=abs(hour-minute);
        temp=abs(360-degree);
        if(temp<degree)
        {
            degree=temp;
        }

        printf("%.3lf\n",degree);
    }
}
