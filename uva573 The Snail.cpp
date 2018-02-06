#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f,position;
    bool check;
    int day,i;
    while(cin>>h>>u>>d>>f && h)
    {
        position=0;
        f=(u*f)/100.0;
        for(day=1,check=true;; day++)
        {
          position+=u;
          if(u>0)
            u-=f;

           if(position>h)
                break;
            position-=d;
            if(position<0){
                    check=false;
                break;
            }
        }
        if(check)
            cout<<"success on day "<<day<<endl;
        else
            cout<<"failure on day "<<day<<endl;
    }

}
