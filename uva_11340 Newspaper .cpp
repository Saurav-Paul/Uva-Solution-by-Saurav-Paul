#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int N,K,M,value,test;
cin>>N;
while(N--){
  cin>>K;
  double cost[K],tcost=0;
  char ch[K];
   for(value=0;value<K;value++){
    cin>>ch[value]>>cost[value];
   }
   cin>>M;
   char line[200000];
   gets(line);
   while(M--){
    gets(line);
    for(value=0;value<strlen(line);value++){
       for(test=0;test<K;test++){
        if(line[value]==ch[test])
        tcost+=cost[test];
       }
    }
   }
   printf("%.2lf$\n",tcost/100);
}
return 0;
}
