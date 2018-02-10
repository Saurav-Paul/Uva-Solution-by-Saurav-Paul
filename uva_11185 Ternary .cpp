#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

long long num,n;
string ch;
int i;
while(cin>>num && num>-1){
    ch="";
    while(1){
        int temp=num%3;
        ch.push_back(temp+'0');
        num/=3;
        if(num==1){
            ch.push_back(num+'0');
            break;
        }
        if(!num){
            break;
        }
    }
    reverse(ch.begin(),ch.end());
    cout<<ch<<endl;
}


}
