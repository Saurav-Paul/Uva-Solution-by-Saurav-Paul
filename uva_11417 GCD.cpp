#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long GCD(long long,long long);
int main()
{
long long G,i,j,N;
while(cin>>N && N!=0){
    G=0;
    for(i=1; i<N; i++){
        for(j=i+1; j<=N; j++)
        {
            G+=GCD(i,j);
        }}
    cout<<G<<endl;
}
}
long long GCD(long long i,long long j){

    while(j!=0){
        i=i%j;
        swap(i,j);
    }
    return i;



}
