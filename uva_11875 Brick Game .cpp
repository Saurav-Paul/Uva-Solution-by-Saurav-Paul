#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int test_case,cont=0,n,value;
cin>>test_case;
while(test_case--){
cin>>n;
int ara[n];
for(value=0;value<n;value++){
    cin>>ara[value];}
cout<<"Case "<<++cont<<": "<<ara[n/2]<<endl;
}
return 0;
}

