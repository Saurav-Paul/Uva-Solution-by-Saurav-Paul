#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pattern(int);
int main(){
  int brick;
  while(cin>>brick && brick!=0){
    cout<<pattern(brick)<<endl;
  }
}
int pattern(int brick){
    if(brick==1)
        return 1;
    else if(brick==2)
        return 2;
    else
        return pattern(brick-1)+pattern(brick-2);
}

