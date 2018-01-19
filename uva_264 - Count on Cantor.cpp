#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num,value,test,a,b,cont,c,d,temp;
    while(cin>>num)
    {
        cont=a=b=0;
        temp=1;
        for(value=1; cont<num; value++,temp++)
        {
            a=0;
            for(test=1,b=value+1; test<=value; test++,cont++)
            {
                if(cont==num)
                    break;
                a++;
                b--;
            }


        }
           if(temp<3 || temp%2!=0)
        cout<<"TERM "<<num<<" IS "<<a<<"/"<<b<<endl;
        else
            cout<<"TERM "<<num<<" IS "<<b<<"/"<<a<<endl;

    }
}
