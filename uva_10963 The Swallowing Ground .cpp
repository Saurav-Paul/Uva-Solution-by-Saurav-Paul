#include<iostream>
#include<cstdio>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
int value,tcase,n,y1,y2;
vector <int> vec;
bool check,line=false;
cin>>tcase;
while(tcase--){
    cin>>n;
    vec.clear();
    check=true;
    for(value=0;value<n;value++){
        cin>>y1>>y2;
        vec.push_back(y1-y2);
    }
    for(value=1;value<vec.size();value++){
        if(vec[0]!=vec[value])
            check=false;
    }
    if(line)
        cout<<endl;
    if(check)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    line=true;
}
return 0;
}
