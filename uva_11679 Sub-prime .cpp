#include<iostream>
#include<cstdio>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
 int bank,n,d,c,value,i,temp;
 vector <int> vec;
 while(cin>>bank>>n && (n || bank)){
     vec.clear();
     bool check=true;
    for(i=0;i<bank;i++){
            cin>>temp;
        vec.push_back(temp);
    }
    for(i=0;i<n;i++){
        cin>>d>>c>>value;
        d--;
        c--;
        vec[d]-=value;
        vec[c]+=value;
    }
    for(i=0;i<vec.size();i++)
        if(vec[i]<0){
           check=false;
           break;
        }
    if(check)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
 }

}
