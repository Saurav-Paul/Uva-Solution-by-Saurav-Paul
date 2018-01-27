#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int cont,st,sp,value,test;
double temp;
while(cin>>st>>sp){
    if(st==0 && sp==0){
        break;}
        cont=0;
    for(value=st;value<=sp;value++){
        test=sqrt(value);
        temp=sqrt(value);
        temp-=test;
        if(temp==0)
            cont++;
    }
    cout<<cont<<endl;
}
}
