#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int test_case,X,Y,x,y,value,test;
while(cin>>test_case && test_case!=0)
{
    cin>>X>>Y;
    while(test_case--)
    {
        cin>>x>>y;
        if(x==X || y==Y)
            cout<<"divisa"<<endl;
        else if(x<X)
        {
            if(y<Y)
            {
               cout<<"SO"<<endl;
            }
            else{

              cout<<"NO"<<endl;
            }
        }
        else if(x>X)
        {
            if(y<Y)
            {
               cout<<"SE"<<endl;
            }
            else{

              cout<<"NE"<<endl;
            }
        }
    }
}


}
