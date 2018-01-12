#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,high_jump, low_jump,cont=0,n,position,next;
    cin>>test_case;
    while(test_case--)
    {
        high_jump=low_jump=0;
      cin>>n;
      cin>>position;
      while(n-- && n>0)
      {
        cin>>next;
        if(position-next<0)  high_jump++;

        if(position-next>0)   low_jump++;

        position=next;
      }
      cout<<"Case "<<++cont<<": "<<high_jump<<" "<<low_jump<<endl;
    }
}
