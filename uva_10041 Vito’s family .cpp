#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
int tcase,n,value;
cin>>tcase;
while(tcase--){
    cin>>n;
    int ara[n],distance=0;
    for(value=0;value<n;value++)
        cin>>ara[value];
    sort(ara,ara+n);
    for(value=0;value<n;value++) distance+=abs(ara[n/2]-ara[value]);
    cout<<distance<<endl;
}
}
