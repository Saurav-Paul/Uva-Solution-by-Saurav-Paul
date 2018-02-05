#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main(){
int tcase,temp,n,ara[10],cont=0;
string ch[10];
cin>>tcase;
while(tcase--){
    int i,temp=0;
    for(i=0;i<10;i++)
    {
         cin>>ch[i]>>ara[i];
         temp=max(temp,ara[i]);

    }
    cout<<"Case #"<<++cont<<":"<<endl;
    for(i=0;i<10;i++)
    {
         if(ara[i]==temp){
            cout<<ch[i]<<endl;
         }

    }
}

return 0;
}
