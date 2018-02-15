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
while(cin>>num && num){
        bool flag=0;
for (int i=0;Prime[i]<=num;i++){
    if(!mark[num-Prime[i]]){
      n1=Prime[i];
      n2=num-Prime[i];
      flag=1;
      break;
    }

}
if (flag)
    cout<<num<<" = "<<n1<<" + "<<n2<<endl;
    else
        cout<<"Goldbach's conjecture is wrong.\n";
    }
}





