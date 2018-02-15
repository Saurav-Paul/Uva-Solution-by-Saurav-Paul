#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int nPrime;
vector<int>Prime;
bool mark[100000009];
void sieve(int n){
int i,j,limit=sqrt(n*1.)+2;
mark[0]=1;
for(int i=4;i<=n;i+=2)
   mark[i]=1;
Prime.push_back(2);
for(i=3;i<=n;i+=2){
    if(mark[i]==false){
        Prime.push_back(i);
        if(i<=limit){
         for(int j=i*i;j<=n;j+=i*2)
                mark[j]=true;
        }
    }
}


}
int main(){

int num,n1,n2,temp;
//freopen("output.txt","w",stdout);
sieve(19000000);
int tcase;
cin>>tcase;
while(tcase--){
   cin>>num;
   for(size_t i=0;i<Prime.size();i++){
    if(Prime[i]<=num && Prime[i]*2>num){
        temp=Prime[i];
        break;
    }
   }
   cout<<temp<<endl;


}
}


