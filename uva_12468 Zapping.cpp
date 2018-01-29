#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int nzip,pzip,zip,st,sp;
while(cin>>st>>sp &&(st!=-1 || sp!=-1)){
    pzip=(sp<st)?(100+sp-st):(sp-st);
    nzip=(st<sp)?(100+st-sp) :(st-sp);
    zip=min(pzip,nzip);
    cout<<zip<<endl;

}
return 0;
}
