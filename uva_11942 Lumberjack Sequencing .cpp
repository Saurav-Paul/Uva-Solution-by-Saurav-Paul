#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int tcase,ara[10],i;
cin>>tcase;
cout<<"Lumberjacks:"<<endl;
while(tcase--){
      for( i=0;i<10;i++)
        cin>>ara[i];
      int cnt=0;
      for(i=cnt=0;i<9;i++){
        if(ara[i]<ara[i+1]){
            cnt=1;
            break;
        }
      }
      if(cnt){
        for(i=cnt=0;i<9;i++){
        if(ara[i]>ara[i+1]){
            cnt=1;
            break;
        }
      }
      }
      if(cnt)
        cout<<"Unordered"<<endl;
      else
        cout<<"Ordered"<<endl;
}



}
