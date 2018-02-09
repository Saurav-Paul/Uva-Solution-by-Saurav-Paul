#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
char c;
int t;
string ch="";
while(1){
         ch="";
    while(1){
            scanf("%c",&c);

        if(c=='\n'){
        break;
        }
        if((c>='a' && c<='z')||( c>='A'&&c<='Z)')){
            ch.push_back(c);
        }

    }
    if(ch=="DONE")
        break;


    bool check=1;
    int j=ch.size()-1;
    for(int i=0;i<=j/2;i++,j--){
       if(tolower(ch[i])!=tolower(ch[j]))
       {
           check=0;
           break;
       }
    }
    if(check)
        cout<<"You won't be eaten!"<<endl;
    else
        cout<<"Uh oh.."<<endl;


}



}
