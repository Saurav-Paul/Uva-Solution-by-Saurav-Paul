#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long sum(long long int);
int main(){
long long n;
while(cin>>n){
   cout<< sum(n)<<endl;
}
}

long long sum(long long int n){
int i;
long long s=0;
s=(n*n*(n+1)*(n+1))/4;
return s;

}
