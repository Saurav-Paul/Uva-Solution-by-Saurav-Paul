#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long bigMod(long long B,long long P,long long M);
int main(){
long long B, P, M;
 while(cin>>B>>P>>M) {
 cout<< bigMod(B, P, M)<<endl;;
 }
return 0;
}
long long bigMod(long long B,long long P,long long M){
if(P==0)
    return 1%M;
int ans=bigMod(B,P/2,M);
ans=(ans*ans)%M;
if(P%2==1) ans=(ans*B)%M;
return ans;


}
