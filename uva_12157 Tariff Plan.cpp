#include<iostream>
using namespace std;
int main(){
int tcase,cs=0,mile,juice,n,sec;
cin>>tcase;
while(tcase--){
    cin>>n;
    mile=juice=0;
    while(n--){
      cin>>sec;
      sec++;
      mile+=((sec/30)*10);
      juice+=((sec/60)*15);
      if((sec%30)!=0){
        mile+=10;
      }
      if(sec%60!=0)
        juice+=15;
    }
    if(mile==juice){
        cout<<"Case "<<++cs<<": Mile Juice "<<mile<<endl;
    }
    else if(mile<juice){
        cout<<"Case "<<++cs<<": Mile "<<mile<<endl;
    }
    else
        cout<<"Case "<<++cs<<": Juice "<<juice<<endl;
}
}
